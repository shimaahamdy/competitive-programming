#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int size=1e5+50;
int main(int argc, char** argv) {
	int s,m;
	while(cin>>s)
	{
		cin>>m;
		long long int i=0,t=0;bool mark[size]={0};
		while(i<m)
		{
			if(!mark[t%m])
			{
				mark[t%m]=1;
				t+=s;
			}
			else break;
			++i;
		}
		if(i==m)cout<<setw(10)<<s<<setw(10)<<m<<"    "<<"Good Choice\n\n";
		else cout<<setw(10)<<s<<setw(10)<<m<<"    "<<"Bad Choice\n\n";
	}
	return 0;
}
