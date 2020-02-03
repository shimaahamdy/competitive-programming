#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arr[9]={0},x=0,y=0,n=0,ans[50000]={0},max=0,k=0,sum=0;
	for(int i=0;i<8;i++)cin>>arr[i];
	cin>>n;
	for(int i=0;i<n;i++)
	{
	     cin>>ans[k]>>ans[k+1];
		 k=k+2;	
	}
	
	for(int i=0;i<(1<<8);i++)
	{
		sum=0;
		for(int j=0;j<8;j++)
		{
			if(i &(1<<j))
			{
				sum+=arr[j];
			}
			
		}
		for(int x=0,c=0;x<n;x++,c=c+2)
		{
			if(i& (1<<arr[c]) || i& (1<<arr[c+1]))break;
			else 
			{
				if(max<sum)max=sum;
			}
		}
	}
	cout<<max;
	return 0;
}
