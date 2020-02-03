#include <iostream>
#include <bits/stdc++.h>

#define clr(v,d)  memset(v,d,sizeof(v))
using namespace std;
int mem[1050][1050][3];
int numdots[1050];
int m,n,x,y;

int repaint(int col,int last,int width)
{
    if(col==m)
    {
        if(width<x || width>y)return 1000000;
        return 0;
    }
    int &ans = mem[col][width][last];

    if(ans!=-1)return ans;
    int dots=1000000;
    if(col==0 || (last==1 && width>=x )|| (last==0 && width+1<=y))
       dots=(n-numdots[col])+repaint(col+1,0,(last==0)? width+1:1);

    int hashs=1000000;
    if(col==0 || (last==0 && width >=x) || (last==1 && width+1<=y))
        hashs=numdots[col]+repaint(col+1,1,(last==1)?width+1:1);

    ans=min(dots,hashs);
    return ans;

}


int main()
{
   cin>>n>>m>>x>>y;
   for(int i=0;i<n;++i)
   {
       for(int j=0;j<m;++j)
       {
           char c;
           cin>>c;
           if(c=='.')++numdots[j];
       }
   }
   clr(mem,-1);
   cout<<repaint(0,2,0);
}
