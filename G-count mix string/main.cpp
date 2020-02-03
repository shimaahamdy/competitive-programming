#include <bits/stdc++.h>

using namespace std;

int a,b;
long long int counter;
void generat(int i,int j)
{
    if(i==a&&j==b)
        ++counter;

    else{
      if(i<a)
     generat(i+1,j);
      if(j<b)
      generat(i,j+1);
    }
}
int main()
{

     cin>>a>>b;
     generat(0,0);
     cout<<counter;
    return 0;
}
