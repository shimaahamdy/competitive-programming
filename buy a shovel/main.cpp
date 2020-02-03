#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int p=0,r=0,i=1,t=0;
	cin>>t>>r;
	p=t;
	while(p%10!=0 && p%10!=r && p!=r)
	{
		++i;
		p=t*i;
	
	}
cout<<i;
	return 0;
}
