#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    string s;
    
    vector<char> v;
    
    cin>>n;
    cin>>s;
    
    while(n != 0)
    {
        if(n % 2 == 1)
        {
            v.push_back(s[0]);
        }
		else
		{
		    v.insert(v.begin(), s[0]);
		}
		s.erase(0, 1);
		n = s.length();
    }
    
	for(int i = 0; i < v.size(); i++)
	{
	    cout<<v[i];
	}
	  
	return 0;
}