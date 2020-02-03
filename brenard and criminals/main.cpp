#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,x=0,arr[105]={0},count=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	count+=arr[x];
	int i=x+1;
	int j=x-1;
	while(i<n+1 || j>0)
	{
		if(i<n+1 && j>0 && (arr[i]+arr[j])==2)count+=2;
		else if(i<n+1 && arr[i]==1 && j<=0)count+=1;
		else if(j>0 && arr[j]==1 && i>=n+1)count+=1;
		j--;
		i++;
	}
	cout<<count;
	return 0;
}
