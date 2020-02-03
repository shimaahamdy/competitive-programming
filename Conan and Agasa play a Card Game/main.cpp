#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arr[100005]={0},a=0,x=0,max=0;
	cin>>a;
	max=0;
	for(int i=0;i<a;i++)
	{
		cin>>x;
		arr[x]++;
		if(max<x)max=x;
		
	}

	for(int i=max;i>0;i--)
		{
			if(arr[i]%2!=0 && arr[i]!=0)
			{
				cout<<"Conan";
				return 0;
			}
			
		}
	
	cout<<"Agasa";
	return 0;
}
