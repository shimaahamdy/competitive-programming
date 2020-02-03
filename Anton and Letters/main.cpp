#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arr[125]={0},c=0;string s;
	getline(cin,s);
	int size=s.size();
	for(int i=0;i<size;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			arr[int(s[i])]++;
		}
	}
    for(int i=89;i<125;i++)
    {
    	if(arr[i]!=0)c++;
    	
	}
    cout<<c;

	
	
	
	return 0;
}
