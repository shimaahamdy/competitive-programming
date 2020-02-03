#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;

int R,C;
char M[100][101];
int visited[100][101];
int dr[] = {-1,-1,0,0,1,1};
int dc[] = {0,1,-1,1,-1,0};

void dfs(int r, int c, int flag){

    cout<<flag<<"\n";
    if(visited[r][c] & (1 << flag))
    visited[r][c] |= (1 << flag);

    for(int k = 0;k < 6;++k){
        int r2 = r + dr[k];
        int c2 = c + dc[k];

        if(r2 >= 0 && r2 < R && c2 >= 0 && c2 < C && M[r2][c2] != '.')
      dfs(r2,c2,flag ^ 1);
}
}

int main(){

        scanf("%d %d",&R,&C);


        for(int i = 0;i < R;++i)
            scanf("%s",M[i]);

        memset(visited,0,sizeof visited);

        for(int i = 0;i < R;++i)
            for(int j = 0;j < C;++j)
                if(M[i][j] == 'I')
                    dfs(i,j,0);

        putchar('\n');




    return 0;
}
