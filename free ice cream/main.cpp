#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,d=0,child=0;
	char a;
	long long int sum=0;
	scanf("%d %lld",&n,&sum);
	while(n--)
	{
		cin>>a>>d;
		if(a=='+')sum+=d;
		else if(sum>=d)sum-=d;
		else ++child;
	}
	cout<<sum<<" "<<child;
	return 0;
}
