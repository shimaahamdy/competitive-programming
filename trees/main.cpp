#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int size=1e5+50;
int main(int argc, char** argv) {
	int arr[size],n=0,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;++i)cin>>arr[i];
	for(int i=0,j=n-1;i!=j;++i,--j)
	{
		if(arr[i]!=arr[j])++c;
	}
	cout<<c;
	return 0;
}
