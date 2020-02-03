#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
      int n=0,k=0,arr[30]={0};
      set<char>s;
      string a;
      cin>>n>>k>>a;
      for(int i=0;i<n;++i)
      {
      	arr[a[i]-'A']=i;
	  }
	  for(int i=0;i<n;++i)
	  {
	  	s.insert(a[i]);
	  	if(s.size()>k)
	  	{
	  		cout<<"YES";
	  		return 0;
		  }
		  if(i==arr[a[i]-'A'])s.erase(a[i]);
	  }
	  cout<<"NO";
	return 0;
}
