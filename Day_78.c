/*
day 78 - minimum spanning tree using prim's algorithm

Problem: Find MST using Prim’s Algorithm.

Input:
- n vertices
- adjacency matrix (weights)

Output:
- Print total weight of MST
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


    int selected[n];
    for(int i=0;i<n;i++)
        selected[i]=0;

    selected[0]=1;

    int edges=0;
    int total=0;


    while(edges<n-1){

        int min=INF,x=0,y=0;

        for(int i=0;i<n;i++){
            if(selected[i]){
                for(int j=0;j<n;j++){
                    if(!selected[j] && graph[i][j]){
                        if(graph[i][j]<min){
                            min=graph[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }

        total+=min;
        selected[y]=1;
        edges++;
    }

    printf("%d",total);
}
