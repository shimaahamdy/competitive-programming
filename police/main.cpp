#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int c=0,cr=0,x=0,n=0;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if(x>0)c+=x;
		else if(x==-1)
		{
			if(c>=x && c>0)
			c=c-1;
			else 
			cr++;
		}
	}
	cout<<cr;
	return 0;
}
