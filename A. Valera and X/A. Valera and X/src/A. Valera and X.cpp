//============================================================================
// Name        : .cpp
// Author      : shimaahamdy
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n=0;
	cin>>n;
	char graph[305][305];
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)cin>>graph[i][j];
	}
	for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				 if((i==j || i+j==n-1)&&(graph[i][j]!=graph[0][0]))
				{
					cout<<"NO\n";
					return 0;
				}
				else if((graph[i][j]!=graph[0][1] )&& i!=j && i+j!=n-1)
				{
					cout<<"NO\n";
					return 0;
				}

			}
		}
		if(graph[0][0]==graph[0][1])cout<<"NO\n";
		else cout<<"YES\n";
	return 0;
}
