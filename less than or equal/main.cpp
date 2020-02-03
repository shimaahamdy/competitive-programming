#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,k=0,arr[200005],ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(arr[k]==arr[k-1])cout<<-1;
	else if(k!=0)
	{
		ans=arr[k-1];
		cout<<ans;
	}
	else if(k==0 && arr[k]>1)cout<<1;
	else cout<<-1;
	
	return 0;
}
