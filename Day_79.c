/*
day 79 - dijkstra shortest path

Problem: Find shortest path from source using Dijkstra.

Input:
- n vertices
- adjacency matrix (weights)

Output:
- Print shortest distances from source (0)
*/
#include <stdio.h>

#define INF 9999

void main() {

    int n;
    scanf("%d",&n);

    int graph[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    }


    int dist[n],visited[n];

    for(int i=0;i<n;i++){
        dist[i]=INF;
        visited[i]=0;
    }

    dist[0]=0;


    for(int count=0;count<n-1;count++){

        int min=INF,u=-1;

        for(int i=0;i<n;i++){
            if(!visited[i] && dist[i]<min){
                min=dist[i];
                u=i;
            }
        }

        visited[u]=1;

        for(int v=0;v<n;v++){

            if(!visited[v] && graph[u][v] && dist[u]!=INF
               && dist[u]+graph[u][v]<dist[v]){

                dist[v]=dist[u]+graph[u][v];
            }
        }
    }


    for(int i=0;i<n;i++)
        printf("%d ",dist[i]);
}
