#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool bfs(char current[],char target[])
{
    queue<c>q;
    map<string,bool>vis;
    q.push(current);
    vis[hashed(cuurent)]=1;
    string ans="no";
    bool x=1;
    while(!q.empty())
    {

        char temp[]=q.front();
        q.pop();
        if(isgoal(temp,target))
        {
            ans="yes";
            break;
        }
        for(int i=0;i<9;++i)
        {
            if(temp[i]=='.'&&x)
                temp[i]='x';
            else if(temp[i])
        }

    }


}
int main()
{

    return 0;
}
