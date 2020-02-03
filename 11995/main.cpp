#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int arr[100005][55];
int main(int argc, char** argv) {
	int x=0,k=0,c=0,t[55]={0};
	queue<int>q;
	cin>>x;
	while(x!=0)
	{
	
		
		for(int i=1;i<=x;++i)q.push(i);
		while(x>1)
		{
			arr[k][c]=q.front();
			q.pop();
			c++;
			q.push(q.front());
			q.pop();
			x--;
			
		}
		arr[k][c]=q.front();
		q.pop();
		t[k]=c;
		c=0;
		k++;
		cin>>x;
	}
 
    for(int i=0;i<k;i++)
    {
    	if(t[i]==0)cout<<"Discarded cards:\n";
    	else 
    	cout<<"Discarded cards:";
    	for(int j=0;j<t[i];j++)
    	{
    		if(j==t[i]-1)cout<<" "<<arr[i][j]<<"\n";
    		else cout<<" "<<arr[i][j]<<",";
		}
	
		cout<<"Remaining card: "<<arr[i][t[i]]<<"\n";
		
	}
	return 0;
}
