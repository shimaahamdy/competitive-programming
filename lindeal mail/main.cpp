#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	const int size=1e5+50;
	int n=0,arr[size];
	cin>>n;
	for(int i=0;i<n;++i)cin>>arr[i];
	for(int i=0;i<n;++i)
	{
		if(i==0)cout<<arr[1]-arr[0]<<" "<<arr[n-1]-arr[0]<<"\n";
		else if(i==n-1)cout<<arr[n-1]-arr[n-2]<<" "<<arr[n-1]-arr[0]<<"\n";
		else
		cout<<min(arr[i+1]-arr[i],arr[i]-arr[i-1])<<" "<<max(arr[n-1]-arr[i],arr[i]-arr[0])<<"\n";
	}
	return 0;
}
