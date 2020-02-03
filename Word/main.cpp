#include <iostream>
#include <string>

//comp O(3*size)
using namespace std;
int main(int argc, char** argv) {
	string a;
	cin>>a;
	int size=a.size(),s_cou=0,c_cou=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]>='a' && a[i]<='z')s_cou++;
		else c_cou++;
		
	}
	if(s_cou>=c_cou)
	{
		for(int i=0;i<size;i++)
		{
			a[i]=tolower(a[i]);
			cout<<a[i];
		}
	}
	else
	{
		for(int i=0;i<size;i++)
		{
			a[i]=toupper(a[i]);
			cout<<a[i];
		}
	}
	return 0;
}
