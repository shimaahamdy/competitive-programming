#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char>s;
    string code;
    int len=0;
    cin>>code;
    int siz=code.size();
    for(int i=0;i<siz;++i)
    {
        if(code[i]=='(')s.push(code[i]);
        else if(!s.empty())
        {
            s.pop();
            len+=2;
        }
    }
    cout<<len;
    return 0;
}
