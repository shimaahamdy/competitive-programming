#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int m;
long long pow(long long int b,long long int p)
{
	if(p==0)return 1;
	long long int sq=pow(b,p/2);
	sq=((sq%m)*(sq%m))%m;
	if(p%2==1)
	sq=((sq%m)*(b%m))%m;
	return sq;
}
int main(int argc, char** argv) {
	long long int p,b;
   while(cin>>b>>p>>m)
   {
    	cout<<pow(b,p)<<"\n";
   }
   
	return 0;
}
