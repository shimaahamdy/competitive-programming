#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
long long 	int n=0,l=0,r=0,d=0,arr[25]={0},sum=0,mx=0,mn=0,count=0,s=0;
	cin>>n>>l>>r>>d;
	for(int i=0;i<n;i++)cin>>arr[i];
	
	for(int i=0;i<(1<<n);i++)
	{
		s=0;
		mx=0;
		mn=0;
		sum=0;
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				s++;
				sum+=arr[j];
				if(s==1)
				{
					mx=arr[j];
					mn=arr[j];
		
				}
				else if(s>=2)
				{
				
				if(mx<arr[j])mx=arr[j];
				if(mn>arr[j])mn=arr[j];
			    }
			}
		}
		
			if(s>=2 && sum>=l && sum<=r && (mx-mn)>=d)count++;
			
		
	}
	cout<<count;
	return 0;
}
