#include <iostream>
#include<bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	stack<char>st;
	string x;
	cin>>x;
	for(int i=0;i<x.size();i++)
	{
		if(!st.empty() && st.top()=='-' && x[i]=='-')st.pop();
		else if(!st.empty() && st.top()=='+' && x[i]=='+')st.pop();
		else st.push(x[i]);
	}
	if(st.empty())cout<<"Yes";
	else cout<<"No";
	return 0;
}
