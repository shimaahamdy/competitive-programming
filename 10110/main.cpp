#include <iostream>
#include <math.h>
using namespace std ;
int main(){
   long long int n;
    while (cin>>n,n) 
	{
		long long int i=sqrt(n);
		if(i*i==n)cout<<"yes\n";
		else cout<<"no\n";
    }
    return 0 ;
}

