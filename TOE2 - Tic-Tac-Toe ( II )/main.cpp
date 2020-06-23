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
bool finalstate(string child)
{
    for(int i=0;i<9;++i)
    {
        if(child[i]=='.')return false;
    }
    return true;
}

int main()
{

    string current=".........";
    string target;
     while(cin>>target && target!="end")
     {
        queue<pair<string,bool> >q;
         q.push({current,1});

        bool ans =false;
        while(!q.empty())
    {

        string temp=q.front().first;
        bool turn=q.front().second;
        q.pop();
        if(temp==target &&( finalstate(temp) || iswon(temp)))
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
    if(ans)cout<<"valid\n";
    else cout<<"invalid\n";

     }
    return 0;
}
