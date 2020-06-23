#include <iostream>

using namespace std;

int main()
{
    const int siz=150;
    int c=0,k,n;
    char m[siz][siz];
    cin>>n>>k;
    for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=n;++j)
                m[i][j]='S';

        }
    for(int i=1;i<=n;++i)
    {
        if(i%2==1)
        {
            for(int j=1;j<=n;j+=2)
            {
                 if(c==k)break;
                m[i][j]='L';
                ++c;

            }
        }

        else
        {
            for(int j=2;j<=n;j+=2)
            {
                if(c==k)break;
                m[i][j]='L';
                ++c;

            }
        }
        if(c==k)break;
    }
    if(c!=k)cout<<"NO";
    else
    {
        cout<<"YES\n";
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=n;++j)
                cout<<m[i][j];
            cout<<"\n";
        }
    }
    return 0;
}
