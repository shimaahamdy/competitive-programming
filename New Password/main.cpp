#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,k=0,a=0;char c='a';
	cin>>n>>k;
	while(n--)
	{
		cout<<c;
		a++;
		c++;
		if(a%k==0)c='a';
	}
	return 0;
}
