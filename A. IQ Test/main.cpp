#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char matrix[4][4];

int main()
{

   for(int i=0;i<4;++i)for(int j=0;j<4;++j)cin>>matrix[i][j];
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            int w=0,b=0;
            if(matrix[i][j]=='#')w++;
            else b++;
            if(matrix[i][j+1]=='#')w++;
            else b++;
            if(matrix[i+1][j]=='#')w++;
            else b++;
            if(matrix[i+1][j+1]=='#')w++;
            else b++;
            if((4-w)==1 || (4-b)==1 || (4-w)==0 || (4-b)==0)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
        cout<<"NO";

    return 0;
}
