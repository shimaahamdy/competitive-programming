#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool vis[30];
vector <int>v[30];
int nodcheck,orgnod;
int r[3];
void dfs(int i,int par)
{
    int vs=0,z=0;
     for(int j=0;j<v[i].size();++j)
    {
        if(vis[v[i][j]])++vs;
    }
    if(vs>=3){
	vis[i]=1;
	 for(int j=0;j<v[i].size();++j)
    {
        if(v[i][j]==r[0] || v[i][j]==r[1] || v[i][j]==r[2])++z;
    }
    if(z<3)++nodcheck;
    else ++orgnod;
	}
    for(int j=0;j<v[i].size();++j)
    {
        if(!vis[v[i][j]] && v[i][j]!=par)dfs(v[i][j],i);

    }


}
int main()
{
    int n,m;char c,a;
    cin>>n>>m;
    for(int i=0;i<3;++i)
    {
        cin>>c;
        vis[c-'A']=1;
        r[i]=c-'A';
    }
    for(int i=0;i<m;++i)
    {
        cin>>a>>c;
        v[a-'A'].push_back(c-'A');
        v[c-'A'].push_back(a-'A');

    }
    for(int i=0;i<26;++i)
    {

        if(vis[i] ||  v[i].size()==0)continue;
        dfs(i,-1);
    }
    if((nodcheck+orgnod)+3==n)
    {
        if(orgnod!=0)orgnod=1;
        cout<<"WAKE UP IN, "<<orgnod+nodcheck<<", YEARS";
    }
    else cout<<"THIS BRAIN NEVER WAKES UP";
    return 0;
}
