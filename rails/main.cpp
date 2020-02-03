#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=1,x=0,c=0,o=0;queue<int>q;stack<int>s;vector<bool>v;bool h=true,a=true;int arr[1005]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
	    q.push(x);
	}
	
		
	for(int i=1;i<=n;i++)
	{
		if(q.front()==i)
		{
			q.pop();
		}
		else if(!s.empty() && s.top()==q.front())
		{
		
				q.pop();
				s.pop();
				s.push(i);
		}
		else 
		{
			s.push(i);
		}
	}
	while(!s.empty())
	{
		if(s.top()==q.front())
		{
			s.pop();
			q.pop();
		}
		else break;
	}
	if(s.empty())v.push_back(true);
	else v.push_back(false);



while(!v.empty())
{
	int i=0;
	 if(v[i])cout<<"yes";
	 else cout<<"no";
	 i++;
	 v.pop_back();
}
	return 0;
}
