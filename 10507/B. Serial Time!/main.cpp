#include <iostream>

using namespace std;
char graph[15][15][15];
int connected;
int n,m,k,ans;

void dfs(int x,int y,int z)
{
    if(x<0 || x>=n || y<0 || y>=m || z<0 || z>=k || graph[z][x][y]=='#')return;

    graph[z][x][y]='#';
    ++ans;
    dfs(x-1,y,z);
    dfs(x+1,y,z);
    dfs(x,y-1,z);
    dfs(x,y+1,z);
    dfs(x,y,z-1);
    dfs(x,y,z+1);
}
int main()
{
    int x,y;
    cin>>k>>n>>m;

    for(int z=0;z<k;++z)
    {
        for(int x=0;x<n;++x)
        {
            for(int y=0;y<m;++y)cin>>graph[z][x][y];
        }

    }
    cin>>x>>y;
    dfs(x-1,y-1,0);
    cout<<ans;

    return 0;
}
