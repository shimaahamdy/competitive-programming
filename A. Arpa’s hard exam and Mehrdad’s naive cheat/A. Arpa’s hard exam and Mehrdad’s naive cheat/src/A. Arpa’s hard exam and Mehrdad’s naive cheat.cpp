//============================================================================
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long long int a=0,x=0;
	int ans[]={6,8,4,2};
	cin>>a;
	if(a==0)cout<<1;
	else
	{
		x=a%4;
		cout<<ans[x];
	}
	return 0;
}
