#include <iostream>

using namespace std;
bool visc[10], visRD[100],visLD[100];
int col[10];
int n = 8,mx=8,row,colum;

void print()
{
    for(int i=1;i<9;++i)
        cout<<col[i]<<" ";
    cout<<"\n";
}


void quennPuzzle(int c)
{
    if(c>8)
    {
        print();
        return;
    }
    if(c==colum)quennPuzzle(c+1);
    else
    {

    for(int r=1;r<=n;++r)
    {
        if(!visc[r]&& !visRD[c+r] && !visLD[r-c+mx])
        {

        col[c]=r;
        visc[r]=1;visRD[c+r]=1;visLD[r-c+mx]=1;
        quennPuzzle(c+1);
        visc[r]=0;visRD[c+r]=0;visLD[r-c+mx]=0;
        }



    }
    }
}
int main()
{
    cin>>row>>colum;
    visc[row]=1;visRD[colum+row]=1;visLD[colum-row+mx]=1;
    col[colum]=row;
     quennPuzzle(1);
     cout<<"SOLN COLUMN
# 1 2 3 4 5 6 7 8";
    return 0;
}
