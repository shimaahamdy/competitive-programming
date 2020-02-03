#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char graph[30][30];
bool vis[30][30];
int di[8]={0,0,1,-1,1,-1,1,-1};
int dj[8]={1,-1,0,0,1,-1,-1,1};
int n=0;
bool vaild(int i,int j)
{
	if(i>=0 && i<n && j>=0 && j<n)return true;
	else return false;
}
void dfs(int i,int j)
{
	if(vis[i][j])return;
	vis[i][j]=1;
	for(int k=0;k<8;++k)
	{
		int ni=i+di[k];
		int nj=j+dj[k];
        if(vaild(ni,nj)&&!vis[ni][nj]&&graph[ni][nj]=='1')dfs(ni,nj);	                                                                    
	}
}
int main(int argc, char** argv) {
	int t=1;
	while(cin>>n)
	{
		for(int i=0;i<n;++i)
		{
			scanf("%s",graph[i]);
		}
		int ans=0;
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(!vis[i][j] && graph[i][j]=='1')
				{
				dfs(i,j);
				++ans;
			    }
			}
		}
		cout<<"Image number "<<t<<" contains "<<ans<<" war eagles.\n";
		++t;
	}
	return 0;
}
