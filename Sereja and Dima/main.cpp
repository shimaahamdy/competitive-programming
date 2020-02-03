#include <iostream>

// comp o(2n) 1<=n<=1000
using namespace std;
int main(int argc, char** argv) {
	int arr[1010]={0},n=0,s=0,d=0;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int k=0,i=0,j=n-1;k<n;++k)
	{
		if(arr[j]>arr[i])
		{
			if(k%2==0)s+=arr[j];
			else d+=arr[j];
			--j;
		}
		else 
		{
			if(k%2==0)s+=arr[i];
			else d+=arr[i];
			++i;
		}
	}
	cout<<s<<" "<<d;
	return 0;
}
