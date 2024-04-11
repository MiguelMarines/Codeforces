#include <iostream>

using namespace std;

int main()
{
    int n,k,l,r,sall,sk;
    int  points_students[1000];
    
    cin>>n>>k>>l>>r>>sall>>sk;
    
    for(int i=1;i<=k;i++)
    {
        points_students[i]=sk/k;
    }
    
    int t, i=1;
    t=sk%k;
    
    while(t)
    {
        t--;
        points_students[i++]++;
    }
    
    if(k!=n)
    {
        for(int i=k+1;i<=n;i++)
        {
            points_students[i]=(sall-sk)/(n-k);
        }
        int t,i;
        t=(sall-sk)%(n-k);
        i=k+1;
        
        while(t)
        {
            t--;
            points_students[i++]++;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<points_students[i]<<" ";
    }
    
    return 0;
}