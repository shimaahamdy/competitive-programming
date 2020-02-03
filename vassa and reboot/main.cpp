#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,l=0,r=0,ql=0,qr=0,arr[100005]={0},left=0,right=0,suml=0,sumr=0;
	cin>>n>>l>>r>>ql>>qr;
	for(int i=1;i<=n;i++)cin>>arr[i];
	suml=arr[1]*l;
	left=1;
	right=0;
	sumr=arr[n]*r;
	for(int i=2,j=n,count=0;count<n;count++)
	{
		if(left==1)
		{
			if(arr[j]*r<arr[i]*l+ql)
			{
				suml+=arr[j]*r;
				right=1;
				j--;
				left=0;
			}
			else
			{
				suml+=arr[i]*l+ql;
				left=1;
				right=0;
				i++;
			}
		}
		else
		{
			if(arr[j]*r+qr<arr[i]*l)
			{
				suml+=arr[j]*r+qr;
				right=1;
				left=0;
				j--;
			}
			else 
			{
				suml+=arr[i]*l;
				right=0;
				left=1;
				i++;
			}
		}
	}
	right=1;
	left=0;
		for(int i=1,j=n-1,count=0;count<n;count++)
	{
		if(left==1)
		{
			if(arr[j]*r<arr[i]*l+ql)
			{
				sumr+=arr[j]*r;
				right=1;
				j--;
				left=0;
			}
			else
			{
				sumr+=arr[i]*l+ql;
				left=1;
				right=0;
				i++;
			}
		}
		else
		{
			if(arr[j]*r+qr<arr[i]*l)
			{
				sumr+=arr[j]*r+qr;
				right=1;
				left=0;
				j--;
			}
			else 
			{
				sumr+=arr[i]*l;
				right=0;
				left=1;
				i++;
			}
		}
	}
	cout<<suml;
	return 0;
}
