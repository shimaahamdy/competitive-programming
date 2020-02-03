#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arr[30]={0},n=0,k=0,s=1,com[30]={0},c=0;char str[1000005]={0};
	cin>>n>>k>>str;
	for(int i=0;i<n;i++)arr[str[i]-'A']=i;
	for(int i=0;i<30;i++)
	{
		if(arr[i]!=0)
		{
			com[c]=arr[i];
			c++;
		}
	}
	for(int i=0;i<c;i++)cout<<com[i];
	/*for(int i=0;i<c-1;i++)
	{
		if(com[i+1]<com[i])s++;
		
	}
	if(k<s)cout<<"YES";
	else cout<<"NO";*/
	return 0;
}
