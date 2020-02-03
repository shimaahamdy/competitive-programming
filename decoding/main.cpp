#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0;char arr[2005],ans[2005];
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	if(n==1)cout<<arr[0];
	else
	{
	ans[0]=arr[n-2];
	ans[n-1]=arr[n-1];
	for(int i=1,j=n-2,x=n-3;x>0;x-=2,++i,--j)
	{
		ans[j]=arr[x];
		ans[i]=arr[x-1];
	}
	if(n%2!=0)
	{
		ans[(n-1)/2]=arr[0];
			for(int i=0;i<n;i++)cout<<ans[i];
            
	}
	else 
	{
			for(int i=0;i<n;i++)cout<<ans[i];

	}
	}
    

	return 0;
}
