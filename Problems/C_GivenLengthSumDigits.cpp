#include <iostream>

using namespace std;
 
int main( )
{
    
    int m, s;
 
    while(scanf("%i %i", &m, &s) != EOF)
    {
        if(m * 9 < s)
        {
            cout<<"-1 -1"<<endl;
            continue;
        }
 
        if(!s)
        {
            if(m == 1)
                cout<<"0 0"<<endl;
            else
                cout<<"-1 -1"<<endl;
            continue;
        }
 
        int aux = s;
        
        for(int i = m; i >= 1; i--)
        {
            int flag = 0;
            
            if(i == m)
                flag = 1;
                
            if(9 * (i - 1) <= aux - flag)
            {
                cout<<aux - 9 * (i - 1);
                for(int j = 1; j <= i - 1; j++)
                    cout<<"9";
                break;
            }
            
            if(flag) 
            {
                cout<<"1";
                aux -= 1;
            }
            
            else
            {
                cout<<"0";
            }
        }
 
        cout<<" ";
        
        aux = s;
        
        for(int i = m; i >= 1; i--)
        {
            if(9 >= aux)
            {
                cout<<aux;
                
                for(int j = 1; j <= i - 1; j++)
                    cout<<"0";
                break;
            }
            
            cout<<"9";
            aux -= 9;
        }
 
        cout<<endl;
    }
 
    return 0;
}