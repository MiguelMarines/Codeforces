#include <iostream>
#include <cstring>

using namespace std;

char public_key[1000001];
int tap[1000001];

int main()
{

    int a, b, length;
 
    memset(tap, 0, sizeof(tap));
 
    cin>>public_key;
    cin>>a>>b;
 
    length = strlen(public_key);
 
    int ans = 0;
    for (int i = 0; i < length; i++)
    {
        ans *= 10;
        ans += public_key[i] - '0';
        ans %= a;
        if (!ans) tap[i] = 1;
    }
 
    int temporal = 0, in = 1;
    ans = 0;
    
    for (int i = length - 1; i >= 0; i--)
    {
        ans = (in * (public_key[i] - '0')) % b + ans;
        ans %= b;
        in = (in * 10) % b;
 
 
        if (!ans && public_key[i] != '0' && tap[i - 1])
        {
            cout<<"YES"<<endl;
            temporal = 1;
            for (int j = 0; j <= i - 1; j++)
            {
                cout<<public_key[j];
            }
            cout<<endl;
            for (int j = i; j < length; j++)
            {
                cout<<public_key[j];
            }
            cout<<endl;
            break;
        }
    }
 
    if (!temporal)
        cout<<"NO";
 
    return 0;
}