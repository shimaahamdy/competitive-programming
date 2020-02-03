#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	stack<char>st;
	string x="sh";
	vector<int>v;
	int c=0;
	while(true)
	{
	cin>>x;
	if(x[0]=='-')break;
	else {
	for(int i=0;i<x.size();i++)
	{
		if(st.empty() && x[i]=='}')
		{
			st.push('{');
			c++;
		}
		else if(!st.empty() && st.top()=='{' && x[i]=='}')
		
		{
			st.pop();
	    }
	    else st.push(x[i]);
	}
	while(!st.empty())
	{
		if(st.top()=='{')
		{
			c++;
			st.pop();
			st.pop();
		}
	}
    v.push_back(c);
	c=0;
	while(!st.empty())st.pop();	
}
}
for(int i=0;i<v.size();i++)
{
	cout<<i+1<<". "<<v[i]<<"\n";
	}	
	return 0;
}
