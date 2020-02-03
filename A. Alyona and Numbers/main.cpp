#include <iostream>

using namespace std;

int main()
{
   int n,m,m1,n1,arr[6]={0};
   long long int c=0;
   cin>>n>>m;
    m1=max(n,m);
    n1=min(n,m);
     for(int i=1;i<5;i++)
     {
         if(m1<(5-i))continue;
         arr[i]=((m1-(5-i))/5)+1;
     }
     arr[0]=(m1/5);
      for(int i=1;i<=n1;++i)
      {
          c+=arr[i%5];
      }
    cout<<c;
    return 0;
}
