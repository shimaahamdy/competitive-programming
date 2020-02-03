#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    string a;int arr[150]={0},n=0;bool b=0,c=0;
    cin>>n>>a;
    for(int i=0;i<n;++i)
    {
        arr[int(a[i])]++;
	}
	for(int i=0,j=n-1;i<=j;)
	{
		if(arr[int(a[i])]>1)
		{
			arr[int(a[i])]--;
			++i;
		}
	    else b=1;
	    if(arr[int(a[j])]>1)
	    {
	    	arr[int(a[j])]--;
			--j;
		}
		else c=1;
		if(b&c)
		{
			cout<<j-i+1;
			return 0;
		}
	}
	return 0;
}
