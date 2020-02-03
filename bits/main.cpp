#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
long long int one(long long int x,long long int y)
{
	int countx=0,county=0,num=0;
	for(int i=0;i<65;i++)
	{
		if(x&(1<<i))countx++;
		if(y&(1<<i))county++;
		
	}
	  if(countx>=county)return x;
	  else return y;
}
int main(int argc, char** argv) {
	long long int a=0,x=0,y=0,ans=0,arr[10005]={0},n=0;
	cin>>n;
	for(int j=0;j<n;j++)
	{
	cin>>x>>y;
	a=0;
	ans=0;
	for(int i=0;i<65;i++)
	{
		a=a| (1<<i);
		if(a>=x && a<=y)
		{
			ans=a;
		}
		else if(a>y && ans!=0 && ans>x)
		{
		    arr[j]=ans;	
			break;
		}
	
		else if(a>y && ans<x && ans!=0)
		{
			arr[j]=one(x,y);
			break;
		}
			else if(a>y && ans==0 )
		{
			arr[j]=x;
			break;
		}
	}
}
for(int i=0;i<n;i++)cout<<arr[i]<<"\n";	
	return 0;
}
