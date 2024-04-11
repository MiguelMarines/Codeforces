#include<iostream>

using namespace std;

int main ()
{
    long long x = 0, f = 1;
    char c = getchar ();
    
    while (c < '0' || c > '9')
    {
        if (c == '-')
	        f = -1;
	       
        c = getchar ();
    }
    
    while (c >= '0' && c <= '9')
    {
        x = x * 10 + c - '0';
        c = getchar ();
    }
    
    int n = x * f;
    
    cout<<"+------------------------+"<<endl;
    cout<<"|";
    
    if (n)
        cout<<"O.";
    else
        cout<<"#.";
    
    for(int i = 1; i <= 10; i++)
        if ((n - 4) > 3 * (i - 1))
            cout<<"O.";
        else
            cout<<"#.";
    
    cout<<"|D|)"<<endl;
    
    if (n > 1)
        cout<<"|O.";
    else
        cout<<"|#.";
    
    for (int i = 1; i <= 10; i++)
        if ((n - 5) > 3 * (i - 1))
            cout<<"O.";
        else
            cout<<"#.";
      
    cout<<"|.|\n";
    
    if (n > 2)
        cout<<"|O";
    else
        cout<<"|#";
    
    cout<<".......................|"<<endl;
    
    if (n > 3)
        cout<<"|O.";
    else
        cout<<"|#.";
    
    for (int i = 1; i <= 10; i++)
        if ((n - 6) > 3 * (i - 1))
            cout<<"O.";
        else
            cout<<"#.";
    
    cout<<"|.|)"<<endl;
    cout<<"+------------------------+";
    
    return 0;
}