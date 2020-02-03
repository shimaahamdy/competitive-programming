#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int size=1e5+50;
int one_cake[size];
int grad[size],n,k;
bool test_num(long long int a)
{
	long long int c=0;
	int t=k;
	for(int i=0;i<n;i++)
	{
		long long int s=grad[i]-a*one_cake[i];
		if(s>=0)c++;
		else if(s+t>=0)
		{
			c++;
			t+=s;
		}
	}
	if(c==n)return true;
	else return false;
}
int main(int argc, char** argv) {
	long long int l=0,h=1e10,mid=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)cin>>one_cake[i];
	for(int i=0;i<n;i++)cin>>grad[i];
	while(l<h)
	{
		mid=l+(h-l+1)/2;
		if(test_num(mid))
		{
			l=mid;
		}
		else h=mid-1;
	}
	cout<<l;
	
	return 0;
}
