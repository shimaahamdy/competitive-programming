#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    long long int size=0,n=0,f=0,s=0,v=0,arr[100000]={0},ansr[100000]={0},op=0,ans=0,test=0,cont=0;
    scanf("%lld",&test);
    while(test--)
    {
    scanf("%lld",&size);
    scanf("%lld",&n);
    while(n--)
    {
    	scanf("%lld",&f);
    	scanf("%lld",&s);
    	scanf("%lld",&v);
    	arr[f]+=v;
    	arr[s+1]-=v;
	}
	for(int i=1;i<size;i++)
	{
		arr[i]+=arr[i-1];
	}
	scanf("%lld",&op);
	for(int i=0;i<op;i++)
	{
		scanf("%lld",&ans);
		ansr[cont]=arr[ans];
		cont++;
	}
	for(int i=0;i<size;i++)arr[i]=0;
}
	for(int i=0;i<cont;i++)cout<<ansr[i]<<"\n";
 	return 0;
} 
