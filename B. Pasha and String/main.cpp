#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100050];
int main()
{
    string s;
    int m,num;
    cin>>s;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&num);
        arr[num]++;
    }
    for(int i=1;i<=s.size()/2;++i)
    {
         arr[i]+=arr[i-1];
        if(arr[i]%2==1)
            swap(s[i-1],s[s.size()-i]);
    }
    cout<<s;
    return 0;
}
