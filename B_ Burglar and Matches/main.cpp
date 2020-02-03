#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	pair<int,int>arr[25];int n=0,m=0,a=0,b=0,sum=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		arr[i]={b,a};
	}
	sort(arr,arr+m);
	for(int i=m-1;n!=0 && i>=0;--i)
	{
		if(arr[i].second>=n)
		{
			sum+=arr[i].first*n;
			n=0;
		}
		else 
		{
			sum+=arr[i].first*arr[i].second;
			n=n-arr[i].second;
		}
	}
	cout<<sum;
	return 0;
}
