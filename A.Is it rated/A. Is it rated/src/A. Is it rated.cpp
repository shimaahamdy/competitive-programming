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
	int n,x,y,r=0,past=50000,s=0;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>x>>y;
		if(x!=y)s=1;
		else
		{
			if(y<=past)
			{
				past=y;
			}
			else r=1;
		}
	}
	if(s==0 && r==0)cout<<"maybe\n";
	else if(s==0 && r==1)cout<<"unrated\n";
	else cout<<"rated";
	return 0;
}
