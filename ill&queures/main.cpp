#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;int size=0,arr[100005]={0},n=0,a=0,b=0,ans[100005]={0};
	cin>>s;
    size=s.size();
    for(int i=size-1;i>0;--i)
    {
    	if(s[i]==s[i-1])arr[i+1]=1;
    	else arr[i+1]=0;
	}
	for(int i=2;i<=size;i++)arr[i]+=arr[i-1];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		ans[i]=arr[b]-arr[a];
		
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<"\n";
	return 0;
}
