#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> >city[100005];
long long int d;
void dfs(int x,int p,long long int z )
{
    d=max(d,z);
    for(int j=0;j<city[x].size();++j)
    {
        if(p!=city[x][j].first)dfs(city[x][j].first,x,z+city[x][j].second);
    }
}
int main()
{
    int n=0,a,b,w;long long int sum=0;
    cin>>n;
    for(int i=1;i<n;++i)
    {
        cin>>a>>b>>w;
        city[a].push_back({b,w});
        city[b].push_back({a,w});
        sum+=w*2;
    }
    dfs(1,0,0);
    cout<<sum-d;
    return 0;
}
