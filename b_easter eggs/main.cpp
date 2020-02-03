#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char arr[]={'R','O','Y','G','B','I','V'};int n=0,loop=0,mod=0,i=0,j=0;
	cin>>n;
	loop=n/7;
	for(i=0;i<loop;i++)
	{
		for(j=0;j<7;j++)cout<<arr[j];
	}
	mod=n%7;
	if(mod<=4)
	{
		for( i=(4-mod),j=0;j<mod;j++,i++)
		{
			cout<<arr[i];
		
		}
	}
	else
	{
		for(i=0;i<mod;i++)
		{
			cout<<arr[i];
		}
	}
	return 0;
}
