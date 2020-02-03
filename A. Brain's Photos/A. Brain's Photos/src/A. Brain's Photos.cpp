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
	int n,m;
	char x;
	bool bworc=0;
	cin>>n>>m;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			cin>>x;
			if(x=='C'||x=='M'||x=='Y')bworc=1;
		}
	}
	if(bworc)cout<<"#Color";
	else cout<<"#Black&White";
	return 0;
}
