#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int n;
char grid[101][101];
int di[4]={0,0,1,-1};
int dj[4]={1,-1,0,0};
bool vis[101][101];
bool vaild(int i,int j)
{
	if(i<n&&j<n&&i>=0&&j>=0&&grid[i][j]!='.'&&!vis[i][j])return 1;
	else return 0;
}
void dfs(int i,int j)
{
	vis[i][j]=1;
	for(int k=0;k<4;++k)
	{
		int ni=i+di[k];
		int nj=j+dj[k];
		if(vaild(ni,nj))dfs(ni,nj);
	}
}
int main(int argc, char** argv) {
	int t=0,b=1;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int c=0;
	memset(vis,0,sizeof vis);
     for(int i=0;i<n;++i)
     {
     	for(int j=0;j<n;++j)cin>>grid[i][j];
	 }
	 for(int i=0;i<n;++i)
	 {
	 	for(int j=0;j<n;++j)
	 	{
	 		if(vaild(i,j)&&grid[i][j]=='x')
			 {
			 	++c;
			    dfs(i,j);
		     }
		 }
	 }
	 cout<<"Case "<<b<<": "<<c<<"\n";
	 ++b;
    }
	return 0;
}
