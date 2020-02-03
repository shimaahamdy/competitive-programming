#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a=0,b=0,t=0,arr[800000]={0},c=0;
	while(cin>>a>>b)
	{
	 c=a^b;
	arr[t]=c;
	t++;
    }
    for(int i=0;i<t;i++)cout<<arr[i]<<"\n";
	
	return 0;
}
