#include <iostream>
using namespace std;
 
int main()
{
    
    int n, m, k, x = 1, y = 1;
    bool flag = false;

    cin>>n>>m>>k;
    
    for(int i = 0; i < k - 1; i++)
    {
        cout<<"2";

        for(int j = 0; j < 2; j++)
        {
            if(!flag)
                cout<<" "<<x<<" "<<y++;
            else
                cout<<" "<<x<<" "<<y--;
                
            if(y > m)
            {
                flag = !flag;
                x++;
                y = m;
            }
            
            if(y < 1)
            {
                flag = !flag;
                x++;
                y = 1;
            }
        }
        
        cout<<" ";
    }
    
    cout<<n * m - ((k - 1) * 2);
    
    while(x <= n)
    {
        if(!flag)
            cout<<" "<<x<<" "<<y++;
        else
            cout<<" "<<x<<" "<<y--;
            
        if(y > m)
        {
            flag = !flag;
            x++;
            y = m;
        }
        
        if(y < 1)
        {
            flag = !flag;
            x++;
            y = 1;
        }
    }
    
    cout<<" ";
    
    return 0;
}