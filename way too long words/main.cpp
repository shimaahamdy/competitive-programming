#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string word,num_word[105];int a[105],n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>word;
		int size=word.size();
		if(size<=10)
		{
			num_word[i]=word;
			a[i]=-1;
		}
		else
		{
			num_word[i][0]=word[0];
			num_word[i][1]=word[size-1];
			a[i]=size-2;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==-1)cout<<num_word[i]<<"\n";
		else
		{
			cout<<num_word[i][0]<<a[i]<<num_word[i][1]<<"\n";
		}
	}
	return 0;
}
