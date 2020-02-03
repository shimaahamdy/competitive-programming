#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,arr[100005]={0},m=0,num=0,v[100005]={0},sum=0,sumr=0;
		cin>>n;
        for(int i=1;i<=n;i++)
        {
        	cin>>num;
        	arr[num]=i;
        	v[num]=(n-i)+1;
		}
		cin>>m;
		while(m--)
		{
			cin>>num;
			sum+=arr[num];
			sumr+=v[num];
		}
		cout<<sum<<" "<<sumr;
		
	return 0;
}
