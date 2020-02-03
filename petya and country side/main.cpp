#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int size=0,arr[1005]={0},ans[1005]={0};
	cin>>size;
	for(int i=0;i<size;i++)cin>>arr[i];
	for(int i=0;i<size;i++)
	{
		for(int j=i;j<size-1;j++)
		{
			if(arr[j]>=arr[j+1])ans[i]++;
			else break;
		}
		for(int k=i;k>0;k--)
		{
			if(arr[k]>=arr[k-1])ans[i]++;
			else break;
		}
	}
	cout<<*max_element(ans,ans+size)+1;
	return 0;
}
