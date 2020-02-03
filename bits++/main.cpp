#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;int n=0,c=0;
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s=="X++" || s=="+X+" || s=="++X")++c;
		else 
		--c;
	}
	cout<<c;
	return 0;
}
