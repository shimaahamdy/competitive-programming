#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a=0,b=0,count=0;
	cin>>a>>b;
	while(a<=b)
	{
		count++;
		a*=3;
		b*=2;
	}
	cout<<count;
	return 0;
}
