/*
Problem: Implement Floyd Warshall Algorithm to find shortest paths between all pairs of vertices.

Input:
- Number of vertices n
- n x n adjacency matrix (use large value like 999 for no edge)

Output:
- Shortest distance matrix
*/

#include <stdio.h>

void main() {

    int n;

    scanf("%d", &n);

    int dist[n][n];

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            scanf("%d", &dist[i][j]);

        }

    }

    for (int k = 0; k < n; k++) {

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                if (dist[i][k] + dist[k][j] < dist[i][j]) {

                    dist[i][j] = dist[i][k] + dist[k][j];

                }

            }

        }

    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            printf("%d ", dist[i][j]);

        }

        printf("\n");

    }

}
