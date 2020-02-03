#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
     int n=0,v=0,q=0,type=0,l=0,r=0;long long int ord[100005]={0},arr[100005]={0},ans[100005];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		ord[i]=arr[i];
	}
	sort(ord,ord+(n+1));
	for(int i=2;i<=n;i++)
	{
		arr[i]+=arr[i-1];
		ord[i]+=ord[i-1];
	}
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>type>>l>>r;
		if(type==1)ans[i]=arr[r]-arr[l-1];
		else ans[i]=ord[r]-ord[l-1];
	}
	for(int i=0;i<q;i++)cout<<ans[i]<<"\n";
	
		return 0;
	}
