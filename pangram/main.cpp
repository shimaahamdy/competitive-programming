#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,c=0;bool arr[28]={0};char s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s>='a' && s<='z')
		{
		    if(!arr[s-'a'])
		    {
		    	++c;
		    	arr[s-'a']=1;
			}
		}
		else 
		{
			if(!arr[s-'A'])
			{
				++c;
				arr[s-'A']=1;
			}
		}
	}
	if(c==26)cout<<"YES";
	else cout<<"NO";
	return 0;
}
