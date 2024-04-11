#include <iostream>

using namespace std;

int main()
{
    int n, t, k, d;
    cin>>n>>t>>k>>d;
    
    int t1, t2;
    
    t1 = ((n - 1) / k + 1) * t;
    
    int total = 0;
    
    for (int i = 1;; i++)
    {
        if (i % t == 0)
        {
            total += k;
        }
        
        if (i > d)
        {
            if ((i - d) % t == 0)
                total += k;
        }
        
        if (total >= n)
        {
            t2 = i;
            break;
        }
    }
    
    if (t2 < t1)
        cout<<"YES";
        
    else
        cout <<"NO";
        
    return 0;
}