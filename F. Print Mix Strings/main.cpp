#include <bits/stdc++.h>

using namespace std;
set<string>s;
string a,b;
void generat(string x,int i,int j)
{
    if(i==a.size()&&j==b.size())
        s.insert(x);

    else{
   if(i<a.size())
     generat(x+a[i],i+1,j);
   if(j<b.size())
      generat(x+b[j],i,j+1);
    }
}
int main()
{

int t;
cin>>t;
while(t--)
{

    cin>>a>>b;
    string t="";
  generat(t,0,0);
  set<string>::iterator it;
  for(it=s.begin();it!=s.end();++it)
  {
      cout<<*it<<"\n";
  }
  s.clear();
  cout<<"\n";
}
    return 0;
}
