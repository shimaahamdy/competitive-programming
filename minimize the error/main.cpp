#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    int n=0,k=0,k1=0,k2=0,arr1[1009]={0},arr2[1009]={0},sum[1009]={0},con=0,j=0;long long int res=0;
    cin>>n>>k1>>k2;
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<n;i++)
    {
    	cin>>arr2[i];
    	sum[i]=abs(arr2[i]-arr1[i]);
	}
	sort(sum,sum+n);
	
	k=k1+k2;
	j=n-1;
	while(k!=0 ||max_element(sum,sum+n)==0)
	{
		if(sum[j]!=0 &&k!=0)
		{
			sum[j]--;
			j--;
			k--;
		}
		if(j<0)j=n-1;
	}
	if(k!=0 &&k%2==0)cout<<0;
	else if(k!=0 &&k%2!=0)cout<<1;
	else
	{
		for(int i=0;i<n;i++)
		{
			res+=(sum[i]*sum[i]);
		}
		cout<<res;
	}
	return 0;
}
