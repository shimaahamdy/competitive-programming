//============================================================================
// Name        : .cpp
// Author      : shimaahamdy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n=0,t=0;
	cin>>n>>t;
	if(n==1 && t==10) cout<<"-1";
	else if(t==10)
	{
		cout<<1;
		for(int i=0;i<n-1;++i)cout<<0;
	}
	else
	{
		cout<<t;
		for(int i=0;i<n-1;++i)cout<<0;
	}
	return 0;
}
