#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	const int n= 1e5+50;char arr[n];int size;long long int a_sum=0,d_sum=0;
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		if(arr[i]=='A')a_sum++;
		else d_sum++;
	}
	if(a_sum>d_sum)cout<<"Anton";
	else if(a_sum<d_sum)cout<<"Danik";
	else cout<<"Friendship";
	return 0;
}
