#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x=0,y=0,sum=0,n=0,l=0,d=0,k=0;
	cin>>n>>l>>k>>d;
	while(sum<n)
	{
		x+=l;
		sum+=k;
		
	}
    y=d+l;
    sum=k;
    sum+=(y/l)*k;
    while(sum<n)
    {
    	y+=l;
    	sum+=2*k;
	}
	if(x<=y)cout<<"NO";
	else cout<<"YES";
	
	return 0;
}
