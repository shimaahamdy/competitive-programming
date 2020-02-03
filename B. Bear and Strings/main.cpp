#include <iostream>

using namespace std;

int main()
{
    string s;int coun=0;
    cin>>s;
    int siz=s.size();
    for(int i=0;i<siz-3;++i)
    {
        bool appear=false;
        for(int j=i;j<siz;)
        {
            if(appear)++coun;

            else if(j<siz-3 && s[j]=='b' &&s[j+1]=='e' &&s[j+2]=='a'&& s[j+3]=='r' )
                  {
                      j=j+4;
                      appear=true;
                      ++coun;
                      continue;
                  }
                  ++j;

        }
    }
    cout<<coun;
    return 0;
}
