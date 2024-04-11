#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    int sequence_integers[100000];
    
    for(int i = 0; i < n; i++)
    {
	    cin>>sequence_integers[i];
        
    }
    
    set <int> ans;
    int d[100000];
    
    sort(sequence_integers, sequence_integers + n);

    if(n == 1)
    {
	    cout<<-1;
	    return 0;
    }
    
    else if(n == 2)
    {
	    int diferencia = sequence_integers[1] - sequence_integers[0];
	    
	    ans.insert(sequence_integers[0] - diferencia);
	    ans.insert(sequence_integers[1] + diferencia);
	    
	    if(diferencia % 2 == 0)
	        ans.insert(sequence_integers[0] + diferencia / 2);
	}
	
	else
	{
		
		for(int i = 0; i < n - 1; i++)
		{
		    
			d[i] = sequence_integers[i + 1] - sequence_integers[i];
		}
		sort(d, d + n - 1);
		
		if(d[0] == d[n - 2])
		{
			ans.insert(sequence_integers[0] - d[0]);
			ans.insert(sequence_integers[n - 1] + d[0]);
		}
		
		else if(d[0] == d[n - 3])
		{

			for(int i = 0; i < n - 1; i++)
			{
				if(sequence_integers[i + 1] - sequence_integers[i] == 2 * d[0] && sequence_integers[i + 1] - sequence_integers[i] != d[0])
				{
					ans.insert(sequence_integers[i] + d[0]);
				}
			}
			
			
		}
		
	}
	
	cout<<ans.size()<<endl;
	
	for (set<int>::iterator integers = ans.begin(); integers != ans.end(); ++integers)
	
    cout <<*integers<<" ";
	
	return 0;
}