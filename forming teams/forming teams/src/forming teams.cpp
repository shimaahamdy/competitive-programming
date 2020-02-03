//============================================================================
// Name        : forming.cpp
// Author      : shimaahamdy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int c;
vector<vector<int>>graph;
vector<bool>vis;
bool df(int cur,int par)
{
	if(vis[cur])return true;
	for(int i=0;i<(int)graph[cur].size();++i)
	{
		if(cur==par)continue;
		++c;
		if(df(graph[cur][i],cur))return true;
	}
	return 0;
}
int main() {
	int n=0,m=0,x,y;
	n=5,m=4;
	graph =vector<vector<int>>(n);
	vis =vector<bool>(n);
	graph[0].push_back(1);
			graph[1].push_back(0);
			graph[1].push_back(3);
						graph[3].push_back(1);
						graph[4].push_back(2);
									graph[2].push_back(4);
									graph[0].push_back(3);
												graph[3].push_back(0);
	/*for(int i=0;i<m;++i)
	{
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);

	}*/
	int r=0;
	for(int i=0;i<=n;++i)
	{
		if(vis[i])continue;
		c=0;
		if(df(i,-1))
		{
			if(c%2==1)r++;
		}
	}
	n-=r;
	if(n%2==0)cout<<r;
	else cout<<r+1;
	return 0;
}
