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
	string s1,s2,s3;
	int s1c=0,s2c=0,n;
	cin>>n;
	if(n==1)
	{
		cin>>s1;
		cout<<s1;
	}
	else
	{
		cin>>s1;
		++s1c;
		for(int i=0;i<n-1;++i)
		{
			cin>>s3;
			if(s1==s3)++s1c;
			else
			{
				s2=s3;
				++s2c;
			}
		}
		if(s1c>s2c)cout<<s1;
		else cout<<s2;
	}
	return 0;
}
