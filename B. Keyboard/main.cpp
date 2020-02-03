#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool can[100];
char keyboard[35][35];
bool exist[200];
bool sh;
vector<pair<int,int> >shift;
int main()
{
    int n,m,x;
    cin>>n>>m>>x;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            cin>>keyboard[i][j];
            if(keyboard[i][j]=='S')
            {shift.push_back(make_pair(i,j));
            sh=1;
            }
            else
            {
                exist[keyboard[i][j]]=1;
                exist[keyboard[i][j]-32]=1;
            }
        }
    }
    int siz;
    string word;
    cin>>siz>>word;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(keyboard[i][j]=='S')continue;
            can[keyboard[i][j]-'a']=1;
            if(!can[keyboard[i][j]-'a'+26])
            {
               for(int k=0;k<shift.size();++k)
               {
                   int d=(i-shift[k].first)*(i-shift[k].first)+(j-shift[k].second)*(j-shift[k].second);
                   int newx=x*x;
                   if(d<=newx)
                   {
                       can[keyboard[i][j]-'a'+26]=1;
                       break;
                   }
               }
            }
        }
    }
    int t=0;
   for(int i=0;i<siz;++i)
{

    if(!sh || !exist[word[i]])
       {
           cout<<word[i]<<"\n";
       }

   }



   return 0;
}
