#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x=0,y=0,arr[20]={0};
	for(int i=0;i<9;i++)cin>>arr[i];
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<9;j++)
		{
			x=arr[i]^arr[j];
			cout<<x<<"\n";
		}
	}
	return 0;
}
