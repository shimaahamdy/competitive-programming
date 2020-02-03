#include <iostream>

// comp o(size) 1e5
using namespace std;
int main(int argc, char** argv) {
	int x=0,y=0,size=0,count=1;
	cin>>size;
	cin>>x;
	for(int i=0;i<(size-1);i++)
	{
		cin>>y;
		if(x!=y)
		{
			count++;
			x=y;
		}
	}
	cout<<count;
	return 0;
}
