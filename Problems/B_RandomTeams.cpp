#include <iostream>
using namespace std;

int main()
{
    long long kmin, kmax;
    long long n, m;
    cin>>n>>m;
    
    long long x, y;
    x=n/m;
    y=n%m;
    
    kmin=y*x*(x+1)/2+(m-y)*x*(x-1)/2;
    kmax=(n-m+1)*(n-m)/2;
    
    cout<<kmin<<" "<<kmax;
    return 0;
}