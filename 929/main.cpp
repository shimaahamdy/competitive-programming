
#include <iostream>

using namespace std;
const int N=1000;
int grid[N][N];
int row,colum;
bool vis[N][N];
int dr[4]={0,0,1,-1};
int dc[4]={1,-1,0,0};


int mn=1000000,res;
bool vaild(int r,int c)
{
    return (r<row && r>=0 && c<colum && c>=0);
}
int minpath(int r,int c)
{

    if(r==row-1 && c==colum-1)
    {
        cout<<r<<"  "<<c<<"  "<<res<<"        "<<mn<<"\n";
        return grid[r][c];
    }

   for(int i=0;i<4;++i)
   {
       int nr=r+dr[i];
       int nc=c+dc[i];

       if(!vaild(nr,nc)|| vis[nr][nc])continue;

       else
       {
           vis[nr][nc]=1;
            cout<<r<<"  "<<c<<"  "<<nr<<"  "<<nc<<"  "<<res<<"        "<<mn<<"\n";
           res=minpath(nr,nc);
           mn=min(mn,res);
             //cout<<r<<"  "<<c<<"  "<<nr<<"  "<<nc<<"  "<<res<<"        "<<mn<<"\n";
           vis[nr][nc]=0;
       }
   }
   int ans= grid[r][c]+mn;
   mn=10000000;
   return ans;

}
int main()
{

    cin>>row>>colum;
    vis[0][0]=1;
    for(int i=0;i<row;++i)
        for(int j=0;j<colum;++j)
          cin>>grid[i][j];

          cout<<minpath(0,0);



    return 0;
}
