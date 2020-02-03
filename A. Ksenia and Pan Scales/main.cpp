#include <iostream>

using namespace std;

int main()
{
    string s1,s2,extra,orig;
    cin>>orig>>extra;
    bool del=false;
    int siz=orig.size();
    for(int i=0;i<siz;++i)
    {
        if(orig[i]=='|')del=1;
        else if(!del)s1.push_back(orig[i]);
        else s2.push_back(orig[i]);
    }
    int siz1=s1.size();
    int siz2=s2.size();
    if(siz1<siz2)
    {
        for(int i=0;i<extra.size();++i)
        {
            if(extra[i]!='1')
            {
                s1.push_back(extra[i]);
                extra[i]='1';
                ++siz1;
            }
            if(siz1==siz2)break;

        }
    }
    else if(siz2<siz1)
    {
        for(int i=0;i<extra.size();++i)
        {
            if(extra[i]!='1')
            {
                s2.push_back(extra[i]);
                extra[i]='1';
                ++siz2;
            }
            if(siz1==siz2)break;

        }
    }

    if(siz1==siz2)
    {
        bool rl=false;
        for(int i=0;i<extra.size();++i)
        {
            if(extra[i]!='1' && !rl)
            {
                s1.push_back(extra[i]);
                rl=true;

            }
            else if(extra[i]!='1' && rl)
            {
                s2.push_back(extra[i]);
                rl=false;
            }
        }
    }
    if(s1.size()==s2.size())
    {
        for(int i=0;i<s1.size();++i)cout<<s1[i];
        cout<<'|';
        for(int i=0;i<s2.size();++i)cout<<s2[i];
    }
    else cout<<"Impossible";
    return 0;
}
