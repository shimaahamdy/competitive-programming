#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s,t;int i=0,j=0;
	cin>>s>>t;
	int size=t.size();
	for(i=0,j=0;i<size;i++)
	{
		if(t[i]==s[j])j++;
	}
	cout<<j+1;
	return 0;
}
