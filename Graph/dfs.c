#include <stdio.h>

#define MAX 100

int graph[MAX][MAX];
int visited[MAX];

void dfs(int vertex, int n)
{
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < n; i++)
    {
        if (graph[vertex][i] == 1 && !visited[i])
        {
            dfs(i, n);
        }
    }
}

int main()
{
    int n, edges;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    dfs(start, n);

    return 0;
}