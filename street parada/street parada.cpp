#include <iostream>
#include<bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
    stack<int>st;
    int x=0,n=1,s=1;
    while(true)
    {
	cin>>n;
	if(n==0)break;
	else 
	{
    while(n--)
    {
    	cin>>x;
    	
    	if(x==s)
    	{
    		s++;
		}
		else if(x!=s && st.empty())
		{
			st.push(x);
		}
		else if(!st.empty() && st.top()!=s)
		{
			st.push(x);
		}
		else if(!st.empty() && st.top()==s)
		{
			while(!st.empty() && st.top()==s)
			{
				st.pop();
				s++;
			}
			if(x==s)s++;
			else st.push(x);
		}
		
    	
	}


	while(!st.empty())
	{
		if(st.top()==s)
		{
			s++;
			st.pop();
		}
		else break;
		
	}
	if(st.empty())cout<<"yes\n";
	else cout<<"no\n";
}
}
	return 0;
}
