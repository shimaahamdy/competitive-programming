#include <bits/stdc++.h>

using namespace std;
long long int matrix[1005][1005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
            cin>>matrix[i][j];
    }
    long long int x=(matrix[0][1]*matrix[0][2])/matrix[1][2];
    long long int a =sqrt(x);
    cout<<a<<" ";
    for(int j=1;j<n;++j)
        cout<<matrix[0][j]/a<<" ";
    return 0;
}
