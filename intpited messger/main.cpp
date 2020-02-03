#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,m=0,arr1[100005]={0},arr2[100005]={0},count=0;long long int sum1=0,sum2=0;
	cin>>n>>m;
	for(int i=0;i<n;++i)cin>>arr1[i];
	for(int i=0;i<m;i++)cin>>arr2[i];
	sum1=arr1[0];
	sum2=arr2[0];
	for(int i=0,j=0;i<n&&j<m;)
	{
		if(sum1==sum2)
		{
			count++;
			sum1=sum2=0;
			i++;
			j++;
			sum1=arr1[i];
			sum2=arr2[j];
		}
		else if(sum2>sum1)
		{
			sum1+=arr1[i+1];
			i++;
		}
		else
		{
			sum2+=arr2[j+1];
			j++;
		}
	}
	cout<<count;
	return 0;
}
