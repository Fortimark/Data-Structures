#include<stdio.h>

void bfs(int);

int a[10][10], vis[10], n;

void main() {
    int i, j, src;
    printf("Enter no. of vertices\n");
    scanf("%d", &n);

    printf("Enter adjacency matrix\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
        vis[i] = 0;
    }
    printf("Enter the src vertex\n");
    scanf("%d", &src);

    printf("Nodes reachable from src vertex\n");
    bfs(src);
}
void bfs(int src) {
    int q[10], f = 1, r = 1, u, i;

    q[r] = src;
    vis[src] = 1;

    while(f <= r) {
        u = q[f];
        printf("%d ", u);
        f = f + 1;

        for(i = 1; i <= n; i++) {
            if(a[u][i] == 1 && vis[i] == 0) {
                vis[i] = 1;
                r = r + 1;
                q[r] = i;
            }
        }
    }
}
