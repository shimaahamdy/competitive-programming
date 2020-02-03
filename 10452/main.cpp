#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char matrix[10][10];
char letters[]={'I','E','H','O','V','A','#'};
int m,n;
using namespace std;

bool vaildup(int i,int j,int index)
{
	if(0<i)
    {
        if(matrix[i-1][j]==letters[index])return true;
        else return false;
    }
    else return false;
}
bool vaildright(int i,int j,int index)
{
	if(j<m-1)
    {
        if(matrix[i][j+1]==letters[index])return true;
        else return false;
    }
    else return false;
}
bool vaildleft(int i,int j,int index)
{
	if(j>0)
    {
        if(matrix[i][j-1]==letters[index])return true;
        else return false;
    }
    else return false;
}
void dfs(int i,int j,int index)
{
    matrix[i][j]='0';

   if(vaildup(i,j,index))
   {
       if(index==6)cout<<"forth";
       else cout<<"forth ";
       dfs(i-1,j,++index);
   }
   else if(vaildright(i,j,index))
   {
       if(index==6)cout<<"right";
       else cout<<"right ";
       dfs(i,j+1,++index);
   }
   else if(vaildleft(i,j,index))
   {
       if(index==6)cout<<"left";
       else cout<<"left ";
       dfs(i,j-1,++index);
   }

}
void cleardata()
{
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<10;++j)matrix[i][j]='S';
    }
}
int main(int argc, char** argv) {
	int t=0;
	cin>>t;
	while(t--)
	{
	  cleardata();
	  cin>>n>>m;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)cin>>matrix[i][j];
	}
	int s=-1;
	for(int j=0;j<m;++j)
	{
		if(matrix[n-1][j]=='@')
		{
			s=j;
			break;
		}
	}
	dfs(n-1,s,0);
	cout<<"\n";
}
	return 0;
}
