#include <stdio.h>

int n, m;
int grid[105][105];
int vis[105][105];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int in(int x, int y){ return 0<=x && x<n && 0<=y && y<m; }

void dfs(int x, int y, int color){
    vis[x][y]=1;
    for(int dir=0; dir<4; dir++){
        int nx=x+dx[dir], ny=y+dy[dir];
        if(in(nx,ny) && !vis[nx][ny] && grid[nx][ny]==color){
            dfs(nx,ny,color);
        }
    }
}

int main(void){
    if (scanf("%d %d", &n, &m) != 2) return 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &grid[i][j]);
        }
    }
    int regions=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]){
                dfs(i,j, grid[i][j]);
                regions++;
            }
        }
    }
    printf("%d\n", regions);
    return 0;
}
