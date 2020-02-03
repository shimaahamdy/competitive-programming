#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n=0,arr[100005]={0},w[10005]={0},l=0,v=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=2;i<=n;i++)arr[i]+=arr[i-1];
	cin>>n;
for(int i=0;i<n;i++)
{
	cin>>l>>v;
	w[i]=arr[v+1]-arr[l];
}
    for(int i=0;i<n;i++)cout<<w[i]<<"\n";
	return 0;
}
