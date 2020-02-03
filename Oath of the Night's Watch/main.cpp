#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,arr[100050],coun=0,ma,mi;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
     ma=arr[n-1];
     mi=arr[0];
     for(int i=1;i<n-1;++i)
     {
     	if(arr[i]==ma || arr[i]==mi)continue;
     	++coun;
	 }
	 cout<<coun;
	return 0;
}
