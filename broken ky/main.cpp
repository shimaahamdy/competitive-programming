#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
       queue<char>q;string x;queue<char>s;
       cin>>x;
       for(int i=0,j=0;i<x.size();i++)
       {
       	if(x[i]=='[')j++;
       	else if(x[i]==']'&& j!=0)j--;
       	else if(j!=0 && x[i]!='[' && x[i]!=']')s.push(x[i]);
       	else if(j==0 && x[i]!='[' && x[i]!=']')q.push(x[i]);
	    else continue;
		
	   }
	   while(!s.empty())
	   {
	   	cout<<s.fron
	   	s.pop();
	   }
	   while(!q.empty())
	   {
	   	cout<<q.front();
	   	q.pop();
	   }
	return 0;
}
