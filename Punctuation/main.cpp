#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;
	getline(cin,s);
	int size=s.size();
	for(int i=0;i<size;)
	{
		if(s[i]==' ')
		{
			while(s[i]==' ')++i;
			if(s[i]>='a' && s[i]<='z')cout<<" "<<s[i];
			else cout<<s[i]<<" ";
		}
		else if(s[i]>='a' && s[i]<='z')cout<<s[i];
		else
		cout<<s[i]<<" ";
		++i;
	}
	return 0;
}
