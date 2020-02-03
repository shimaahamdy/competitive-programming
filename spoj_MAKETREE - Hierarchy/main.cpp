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
const int maxsize=100100;
vector<int>graph[maxsize];
bool vis[maxsize];
vector<int>tree;
int parent[maxsize];
int students,kstudents,wish,per,pos;
void toplogicalsort(int node)
{
    vis[node]=1;
    for(int i=0;i<graph[node].size();++i)
    {
        if(vis[graph[node][i]])continue;
        toplogicalsort(graph[node][i]);
    }
    tree.push_back(node);
}
int main() {

	scanf("%d %d",&students,&kstudents);
	for(int i=1;i<=kstudents;++i)
    {

        scanf("%d",&wish);
        while(wish--)
        {

            scanf("%d",&per);
            graph[i].push_back(per);

        }
    }
    for(int i=1;i<=students;++i)
    {
        if(vis[i])continue;
        toplogicalsort(i);
    }
     pos=0;
    for(int i=students-1;i>=0;--i)
    {
        parent[tree[i]]=pos;
        pos=tree[i];
    }
    for(int i=1;i<=students;++i)
        printf("%d\n",parent[i]);
	return 0;
}

