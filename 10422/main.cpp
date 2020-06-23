#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n=5,m=5;
char grid[n][m+1];
char goal[n][m+1] = { "11111", "01111", "00 11", "00001", "00000" };
int dx[]={-2,-2,-1,-1,1,1,2,2};
int dy[]={-1,1,-2,2,-2,2,-1,1};
bool solved;
int steps;
void knightMoves(int moves,int i,int j)
{
    if(moves==steps)
    {
        if(memcmp(goal,grid,30)==0)
            solved=1;
        return;
    }
    if(solved)return;

    for(int k=0;k<8;++k)
    {
        int nx=i+dx[k];
        int ny=j+dy[k];

        if(nx>=0 && nx<n && ny>=0 && ny<m)
        {
            swap(grid[nx][ny],grid[i][j]);
            knightMoves(moves+1,nx,ny);
            swap(grid[nx][ny],grid[i][j]);
        }
    }

}
int main()
{
     int t,rpos,cpos;
     cin>>t;
     getchar();
     while(t--)
     {

     for(int i=0;i<n;++i)
        gets(grid[i]);

     for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        if(grid[i][j]==' ')
     {
         rpos=i;
         cpos=j;
     }
     solved=0;
     for(int i=0;i<11;++i)
     {
         steps=i;
         knightMoves(0,rpos,cpos);
         if(solved)break;
     }
     if(!solved)cout<<"Unsolvable in less than 11 move(s).\n";
     else cout<<"Solvable in "<<steps<<" move(s).\n";

     }
    return 0;
}
