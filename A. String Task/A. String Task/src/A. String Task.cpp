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
	string vowl="aAeEOoIiyYuU";
	cin>>s;
	int size=s.size();
	for(int i=0;i<size;++i)
	{
		int find=0;
		find=vowl.find(s[i]);
		if(find==-1)
		{
			cout<<".";
			if(s[i]>='A' && s[i]<='Z')cout<<char(s[i]+32);
			else cout<<s[i];
		}
	}
	return 0;
}
