#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string a,b;
	cin>>a>>b;
	int size=a.size();
	for(int i=0;i<size;i++)
	{
		b[i]=tolower(b[i]);
		a[i]=tolower(a[i]);
		if(a[i]<b[i])
		{
			cout<<-1;
			return 0;
		}
		else if(a[i]>b[i])
		{
			cout<<1;
			return 0;
		}
	}
	cout<<0;

	return 0;
}
