#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
long long int arr[10000005];
long long int seive_multi()
{
	long long int c=0;
	for(int i=1;i<=1000000;i++)
	{
		for(int j=i;j<=1000000;j+=i)
		{
		   arr[j]++;
		}
		
	}
	return c;
}
int main(int argc, char** argv) {
	long long int x=0,a=0,b=0,c=0,count=0,m= 1073741824;
	scanf("%lld %lld %lld",&a,&b,&c);
	seive_multi();
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			for(int k=1;k<=c;k++)
			{
				count+=arr[i*j*k];
			}
		}
	}
	cout<<count%m;

	return 0;
}
