#include <iostream>

using namespace std;
char grid[25][25];
int c,n,m,posi,posj,maxi;
bool vis[25][25],ok=true;
char ch;
void cleardata()
{
    c=0;
    maxi=0;
    for(int i=0;i<25;++i)
    {
        for(int j=0;j<25;++j)
            vis[i][j]=0;
    }
    ok=true;
}
bool vaildi(int i)
{
    if(i<0 || i>n-1)return false;
    return true;
}
bool numregion(int i,int j)
{
    if(!vaildi(i) || grid[i][j]!=ch || vis[i][j] )return false;
    if(i==posi && j==posj) ok=false;
    vis[i][j]=1;
    ++c;
    numregion(i+1,j);
    numregion(i-1,j);
    if(j==0)numregion(i,m-1);
    else numregion(i,j-1);

    if(j==m-1)numregion(i,0);
    else numregion(i,j+1);
    return ok;
}

int main()
{
    while(cin>>n>>m)
    {

    cleardata();
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        cin>>grid[i][j];

    }
    cin>>posi>>posj;
    ch=grid[posi][posj];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            c=0;
            ok=true;
            if(vis[i][j] || grid[i][j]=='W')continue;
           if(!numregion(i,j))continue;
           maxi=max(c,maxi);

        }
    }
    cout<<maxi<<"\n";
    }

    return 0;
}
