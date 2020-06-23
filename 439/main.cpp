#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int newrow[8]={-2,-2,2,2,1,-1,1,-1};
int newcoulm[8]={1,-1,1,-1,2,2,-2,-2};
int vis[10][10];
char sq1[5],sq2[5];
bool vaild(int i,int j)
{
    return (i>0 && i<9 && j>0 && j<9);
}

int bfs(int i,int j,int a,int b)
{
    memset(vis, -1, sizeof(vis));
    queue<int>q;
    vis[i][j]=0;
    q.push(i);
    q.push(j);
    while(!q.empty())
    {
         int x=q.front();
         q.pop();
         int y=q.front();
         q.pop();
        // cout<<x<<"   "<<y<<"    "<<d<<"\n";
        if(x==a && y==b)
            return vis[x][y];


         for(int k=0;k<8;++k)
    {
        int newi=x+newrow[k];
        int newj=y+newcoulm[k];

        if(!vaild(newi,newj))continue;
        if(vis[newi][newj]==-1)
        {
            q.push(newi);
            q.push(newj);
            vis[newi][newj]=vis[x][y]+1;
        }
    }



    }
    return -1;

}

int main()
{

    while(scanf("%s%s", sq1, sq2)!= EOF)
   {

      int ans=bfs(sq1[1]-'0',(sq1[0]-'a')+1,sq2[1]-'0',(sq2[0]-'a')+1);
      printf("To get from %s to %s takes %d knight moves.\n", sq1, sq2, ans);


   }


    return 0;
}
