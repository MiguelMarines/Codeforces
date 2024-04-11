#include <iostream>
using namespace std;

int main()
{
    long long int n, x=0;
    cin>>n;
    while(n>=1)
    {
        if(n%2 == 1)
        {
            x++;
            n--;
        }
        else
        {
            n/=2;
        }
    }
    cout<<x<<endl;
    return 0;
}