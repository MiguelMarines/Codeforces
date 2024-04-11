#include <iostream>

using namespace std;

int main ()
{
    int x, value=0, i, j;
    char str[4];
    
    cin>>x;
    gets(str);
    
    for(i=0; i<x; i++ )
    {
        gets(str);
        
        for(j=0; j<3; j++)
        {
            
            if(str[j]== '+')
            {
                value++;
                break;
            }
            
            else if(str[j]== '-')
            {
                value--;
                break;
            }
            
        }
        
    }
    
    cout<<value;
    return 0;
}