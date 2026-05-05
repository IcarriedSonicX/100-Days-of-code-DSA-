/*
day 80 - floyd warshall algorithm

Problem: Find shortest paths between all pairs of vertices.

Input:
- n vertices
- adjacency matrix (weights, 0 if no edge)

Output:
- Print shortest distance matrix
*/
#include <stdio.h>

#define INF 9999

void main() {

    int n;
    scanf("%d",&n);

    int dist[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&dist[i][j]);

            if(i!=j && dist[i][j]==0)
                dist[i][j]=INF;
        }
    }


    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if(dist[i][k]+dist[k][j] < dist[i][j])
                    dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][j]==INF)
                printf("INF ");
            else
                printf("%d ",dist[i][j]);
        }
        printf("\n");
    }
}
