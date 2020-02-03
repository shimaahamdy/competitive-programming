#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;int count=0;char c='a';char a[100005];
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		
		if(s[i]<=c && c<='z' && count<=int('z'))
		{
			count++;
			a[i]=c;
			c++;
		}
		else a[i]=s[i];
	}
	if(count>=26) cout<<a;
	else cout<<-1;
	return 0;
}
