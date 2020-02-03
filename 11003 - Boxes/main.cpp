#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int w[1005],l[1005];
int mem[1005][7005];
int LIS(int cur,int load)
{
    if(cur==n)return 0;
    int &mx=mem[cur][load];

    if(mx)return mx;
    int ch1=LIS(cur+1,load);
    int ch2=0;


    if(w[cur]<=load)
        ch2=LIS(cur+1,min(l[cur],load-w[cur]))+1;
    mx= max(ch1,ch2);

    return mx;

}
int main()
{
    while(cin>>n,n)
    {

    for(int i=0;i<n;++i)scanf("%d%d",&w[i],&l[i]);
    cout<<LIS(0,7000)<<"\n";
    for(int i=0;i<1005;++i)
        for(int j=0;j<7005;++j)
           mem[i][j]=0;
    }
    return 0;
}
