#include<iostream>
#include<cstring>

using namespace std;

#define rep(i, a, b) for(register int i = (a); i <= (b); ++i)

int a[14];

long long dp[14][14][14];
long long sum[14],c[14][14];

const long long mo=1000000007;


long long dfs(int pos,int num,int cnt,bool limit)
{

    if(num < 0)
        return 0;
        
    if(pos == -1)
        return (num == 0);
        
    if(!limit && dp[pos][num][cnt] != -1)
        return dp[pos][num][cnt];
    
    int up = limit?a[pos]:9;
    
    long long tmp = 0, fg = 0;
    
    rep(i, 0, up)
    {
        if(i == 4 || i == 7)
            fg = 1;
            
        else fg = 0;
            tmp += dfs(pos - 1, num - fg, cnt, limit && (i == a[pos]));
    }
    
    if(!limit)
        dp[pos][num][cnt] = tmp;
    
    return tmp;
}

long long calcular(int i, int res)
{
    long long ans = 0;
    
    if(i == 7)
        return 1;
        
    for(int x = 0; x <= 10; x++)
    {
        if(sum[x] && res-x > 0)
        {
            sum[x]--;
            ans=(ans + (sum[x] + 1) * calcular(i + 1, res - x) % mo) % mo;
            sum[x]++;
        }
    }
    return ans;
}

void resolver(long long x)
{
    memset(dp, -1, sizeof(dp));
    
    int pos=0;
    
    while(x)
    {
        a[pos++] = x % 10;
        x = x / 10;
    }

    for(int i = 0; i <= 10; i++)
    {
        sum[i] = dfs(pos - 1, i, i, 1) % mo;

    }
    
    sum[0]--;
    
    long long ans = 0;
    
    for(int i=10; i >= 0; i--)
    {
        if(sum[i])
        {
            ans = (ans + sum[i] * calcular(1,i) % mo) % mo;
        }
    }
    
    cout<<ans<<endl;
}

int main()
{
    long long n;
    
    cin>>n;
    resolver(n);
    
    return 0;
}