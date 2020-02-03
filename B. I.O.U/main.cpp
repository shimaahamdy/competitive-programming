#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dept[105],lend[105];
int main()
{
    int n,m,a,b,c,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        lend[b]+=c;
        dept[a]+=c;
    }
    for(int i=1;i<=n;++i)
    {
        if(lend[i]<dept[i])
            sum+=dept[i]-lend[i];

    }
    cout<<sum;
    return 0;
}
