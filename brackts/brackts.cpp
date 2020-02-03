#include <iostream>
#include<bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	stack<char>st;
	vector<bool>v;
	string x;
	int o=0,c=0;
	cin>>x;
	if(x[0]=='0'|| x[x.size()-1]=='1')v.push_back(false);
	else 
	{
		for(int i=0;i<x.size();i++)
		{
			if(x[i]=='1')c++;
			else o++;
			
		}
	}
	return 0;
}
