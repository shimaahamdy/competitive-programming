#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arr[110]={0},n=0,m=0,x=0,y=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	cin>>m;
	while(m--)
	{
		cin>>x>>y;
		if(x==n)
		{
			arr[x-1]+=y-1;
			arr[x]=0;
		}
		else if(x==1)
		{
			arr[x+1]+=arr[x]-y;
			arr[x]=0;
		}
		else
		{
			arr[x-1]+=y-1;
			arr[x+1]+=arr[x]-y;
			arr[x]=0;
		}
	}
	for(int i=1;i<=n;i++)cout<<arr[i]<<"\n";
	return 0;
}
