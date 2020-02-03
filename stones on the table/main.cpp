#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char s,y;
	int n=0,c=0;
	cin>>n>>s;
	while(--n)
	{
		cin>>y;
		if(s==y)c++;
		else 
		s=y;
	}
	cout<<c;
	return 0;
}
