#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char c,arr[105][105];
int n,m;
bool vaildup(int i,int j)
{
	if(0<=i-1 && arr[i-1][j]!='.' && arr[i-1][j]!=c)return true;
	else return false;
}
bool vailddown(int i,int j)
{
	if(i+1<n && arr[i+1][j]!='.' && arr[i+1][j]!=c)return true;
	else return false;
}
bool vaildright(int i,int j)
{
	if(j+1<m && arr[i][j+1]!='.' && arr[i][j+1]!=c)return true;
	else return false;
}
bool vaildleft(int i,int j)
{
	if(0<=j-1 && arr[i][j-1]!='.' && arr[i][j-1]!=c)return true;
	else return false;
}
int main(int argc, char** argv) {

	set<char>neigh;

	cin>>n>>m>>c;
	for(int i=0;i<n;++i)
    	for(int j=0;j<m;++j)cin>>arr[i][j];
    for(int i=0;i<n;++i)
    {
    	for(int j=0;j<m;++j)
    	{
    		if(arr[i][j]==c)
    		{
    			if(vaildup(i,j))neigh.insert(arr[i-1][j]);
    			if(vailddown(i,j))neigh.insert(arr[i+1][j]);
    			if(vaildright(i,j))neigh.insert(arr[i][j+1]);
    			if(vaildleft(i,j))neigh.insert(arr[i][j-1]);

			}
		}
	}
	cout<<neigh.size();

	return 0;
}
