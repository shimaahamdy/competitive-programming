#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3]={0},b[3]={0},x,y;
    cin>>x>>y;
    if(x==y){cout<<0;return 0;}
    while(x)
    {
        if(x%2==0){a[0]++;x/=2;}
        else if(x%3==0){a[1]++,x/=3;}
        else if(x%5==0){a[2]++,x/=5;}
        else break;
    }
    while(y)
    {
        if(y%2==0){b[0]++;y/=2;}
        else if(y%3==0){b[1]++,y/=3;}
        else if(y%5==0){b[2]++,y/=5;}
        else break;
    }

    if(x==y)cout<<abs(a[0]-b[0])+abs(a[1]-b[1])+abs(a[2]-b[2]);
    else cout<<-1;


    return 0;
}
