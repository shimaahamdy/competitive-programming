#include <iostream>

using namespace std;

int main()
{
    string s,t;
    int ssize,tsize,att[100]={0};
    int arr[100]={0};
    cin>>s>>t;
    ssize=s.size();
    tsize=t.size();
    for(int i=0;i<ssize;++i)
        arr[s[i]-'a']++;

    for(int i=0;i<tsize;++i)
        att[t[i]-'a']++;
    int c=0;
    for(int i=0;i<tsize;++i)
        if(arr[t[i]-'a'])
        {c++;
        arr[t[i]-'a']--;
        }
    if(ssize<tsize|| c!=tsize)
    {
        cout<<"need tree";
        return 0;
    }
    if(ssize==tsize)
    {
        cout<<"array";
        return 0;
    }
    c=0;
    for(int i=0,j=0;i<ssize && j<tsize ;++i)
    {
        if(s[i]==t[j])
        {
            ++c;
            ++j;
        }

    }
    if(c==tsize)cout<<"automaton";
    else cout<<"both";


    return 0;
}
