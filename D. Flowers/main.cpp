#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n=100000;
int m=1000000007;
int f[n+5];
int main()
{
    f[0]=1;
    int k,t,a,b;
    scanf("%d%d",&t,&k);
    for(int i=1;i<=n;++i)
        f[i]=(f[i-1]+(i>=k?f[i-k]:0))%m;

    for(int i=1;i<=n;++i)
        f[i]=(f[i]+f[i-1])%m;

    while(t--)
    {
        scanf("%d%d",&a,&b);
        cout<<(f[b]-f[a-1]+m)%m<<"\n";
    }
    return 0;
}
