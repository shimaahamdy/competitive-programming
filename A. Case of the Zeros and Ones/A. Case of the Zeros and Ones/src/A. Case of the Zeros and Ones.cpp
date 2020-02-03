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
	string s;
	int ones=0,zeros=0,n;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;++i)
	{
		if(s[i]=='1')ones++;
		else zeros++;
	}
	cout<<abs(ones-zeros);
	return 0;
}
