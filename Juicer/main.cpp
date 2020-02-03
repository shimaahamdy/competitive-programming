#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	long long int n=0,b=0,d=0,ans=0,c=0,a=0;
	cin>>n>>b>>d;
	while(n--)
	{
		cin>>a;
		if(a>b)continue;
		else
		{
			ans+=a;
			if(ans>d)
			{
				c++;
				ans=0;
			}
		}
	}
	cout<<c;
	return 0;
}
