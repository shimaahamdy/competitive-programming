#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,m=0,mod=0;bool c;
	while(cin>>n>>m>>c)
	{
		if(n==0&&c==0&& c==0)break;
		else
		{
			long long int p=(n-7)*(m-7);
			if(p%2!=0 && c==0)cout<<p/2<<"\n";
			else if(p%2!=0 && c==1)cout<<p/2+1<<"\n";
			else cout<<p/2<<"\n";
			
		}
	}
	return 0;
}
