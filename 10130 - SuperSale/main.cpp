#include <iostream>

using namespace std;
int pric[1005],weigh[1005],groubs[105],n,mem[1005][35];


int knapsack(int i,int rem)
{
    if(i==n)return 0;

    int &mx=mem[i][rem];

    if(mx)
        return mem[i][rem];


    int choice1=knapsack(i+1,rem);
    int choice2=0;

    if(rem>=weigh[i])
        choice2=knapsack(i+1,rem-weigh[i])+pric[i];

    mx= max(choice1,choice2);
    return mx;

}
int main()
{
    int g,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>pric[i]>>weigh[i];

    cin>>g;
    for(int i=0;i<g;++i)
         cin>>groubs[i];

    int sum=0;
    for(int i=0;i<g;++i)
    {
        sum+=knapsack(0,groubs[i]);
    }
    cout<<sum<<"\n";

    for(int i=0;i<1005;++i)
        for(int j=0;j<35;++j)
           mem[i][j]=0;
    }

    return 0;
}
