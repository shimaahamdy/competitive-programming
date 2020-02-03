#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char s[5];int a=0,b=0,c=0,arr[4]={0};
	for(int i=0;i<3;i++)
	{
		cin>>s;
		if(s[1]=='>')
		{
			arr[s[0]-64]+=arr[s[2]-64]+1;
		}
		else 
		arr[s[2]-64]+=arr[s[0]-64]+1;
	}
	if(arr[1]+arr[2]+arr[3]==3)
	{
		if(arr[1]<arr[2] && arr[1]<arr[3])
		{
			cout<<"A";
			if(arr[2]<arr[3])cout<<"BC";
			else cout<<"CB";
		}
		else if(arr[2]<arr[1] && arr[2]<arr[3])
		{
			cout<<"B";
			if(arr[1]<arr[3])cout<<"AC";
			else cout<<"CA";
		}
		else
		{
			cout<<"C";
			if(arr[1]<arr[2])cout<<"AB";
			else cout<<"BA";
		}
		
	}
	else cout<<"Impossible";
	
	return 0;
}
