/* DFS on Graph - C (Adjacency Matrix) */
#include <stdio.h>
#define MAX 100

int adj[MAX][MAX];
int visited[MAX];

void dfs(int v, int n) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (adj[v][i] && !visited[i]) {
            dfs(i, n);
        }
    }
}

int main() {
    int n = 5;
    /* 0-1, 0-2, 1-3, 1-4 */
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[1][4] = adj[4][1] = 1;
    for (int i = 0; i < n; i++) visited[i] = 0;
    printf("DFS traversal: ");
    dfs(0, n);
    printf("\n");
    return 0;
}
