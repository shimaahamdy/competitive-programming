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
	string p;int sum=0,n=0;
	cin>>n;
	while(n--)
	{
		cin>>p;
		if(p[0]=='T')sum+=4;
		else if(p[0]=='C')sum+=6;
		else if(p[0]=='O')sum+=8;
		else if(p[0]=='D')sum+=12;
		else sum+=20;
	}
	cout<<sum;
	return 0;
}
