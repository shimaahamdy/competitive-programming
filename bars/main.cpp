#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arr[25]={0},ans[55]={0} ,t=0,len=0,bar=0,sum=0,t2=0;
	cin>>t;
	for(int k=0;k<t;k++)
	{ sum=0;
	cin>>bar>>len;
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<(1<<len);i++)
	{
		sum=0;
		for(int j=0;j<len;j++)
		{
			if(i&(1<<j))
			{
				sum+=arr[j];
			}	
		}
		if(sum==bar)
		{
			ans[k]=1;
			break;
		}
	
		
	}
    

}
for(int i=0;i<t;i++)
{
	if(ans[i])cout<<"YES\n";
	else cout<<"NO\n";
}
	return 0;
	
}
