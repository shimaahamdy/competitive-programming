#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool iswon(string child)
{
    if(   (child[0]==child[1] && child[2]==child[0] && child[0]!='.')
       || (child[3]==child[4] && child[3]==child[5] && child[3]!='.')
       || (child[1]==child[4] && child[1]==child[7] && child[1]!='.')
       || (child[6]==child[7] && child[8]==child[6] && child[6]!='.')
       || (child[0]==child[3] && child[0]==child[6] && child[0]!='.')
       || (child[2]==child[5] && child[2]==child[8] && child[2]!='.')
       || (child[0]==child[4] && child[0]==child[8] && child[0]!='.')
       || (child[2]==child[4] && child[2]==child[6] && child[2]!='.')
       )return true;
    else return false;
}

int main()
{

    string current=".........";
     int t;
     cin>>t;
     while(t--)
     {

        string target="",row;
          cin>>row;
          target+=row;
          cin>>row;
          target+=row;
          cin>>row;
          target+=row;

         queue<pair<string,bool> >q;
         q.push({current,1});

        bool ans =false;
        while(!q.empty())
    {

        string temp=q.front().first;
        bool turn=q.front().second;
        q.pop();
        if(temp==target)
        {
            ans=true;
            break;
        }

       char c;
       if(turn)c='X';
       else c='O';

        if(iswon(temp))continue;
       for(int i=0;i<9;++i)
       {

           if(temp[i]=='.')
           {
               temp[i]=c;

              if((temp[i] == target[i])) q.push({temp,!turn});
              temp[i]='.';
           }
       }

    }
    if(ans)cout<<"yes\n";
    else cout<<"no\n";

     }
    return 0;
}
