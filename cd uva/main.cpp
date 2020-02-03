#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,len=0,sum=0,max=0,arr[25]={0},ans=0;
	cin>>n>>len;
	for(int i=0;i<len;++i)cin>>arr[i];
	for(int i=0,k=0;i<(1<<len);i++,k++)
	{
		sum=0;
		for(int j=0;j<len;j++)
		{
			if(i&(1<<j))
			{
				sum+=arr[j];
			
			}
		}
		if(max<sum && sum<=n)
		{
			max=sum; 
			ans=k;
		}
		
	}
      for(int i=0;i<len;i++)
      {
      	if(ans&(1<<i))cout<<arr[i]<<" ";
	  }
	  cout<<"sum:"<<max;
	
	return 0;
}
