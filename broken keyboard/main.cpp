#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int arr[1000000];
int main(int argc, char** argv) {
	int l=0,r=0,c=1,m=1,k=0;string s;
	scanf("%d\n",&k);
    getline(cin,s);
     arr[int(s[0])]=1;
	int size=s.size();
	while(r<size)
	{
		if(c<=k)
		{
			++r;
			if(!arr[int(s[r])])++c;
			++arr[int(s[r])];
			cout<<r<<" "<<c<<" "<<s[r]<<" "<<arr[int(s[r])]<<" "<<l<<" "<<s[l]<<"\n";
		}
		else
		{
			m=max(m,(r-l));
			--arr[int(s[l])];
			++l;
			--c;
			cout<<r<<" "<<c<<" "<<s[r]<<" "<<arr[int(s[r])]<<" "<<l<<" "<<s[l]<<"  "<<m<<"\n";
		}
	}
	return 0;
}
