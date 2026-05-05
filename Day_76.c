/*
day 76 - count connected components in graph

Problem: Count number of connected components in an undirected graph.

Input:
- n vertices
- e edges

Output:
- Print number of components
*/
#include <stdio.h>

int visited[100];

void dfs(int v,int n,int adj[100][100]){

    visited[v]=1;

    for(int i=0;i<n;i++){
        if(adj[v][i]==1 && !visited[i])
            dfs(i,n,adj);
    }
}

void main() {

    int n,e;
    scanf("%d %d",&n,&e);

    int adj[100][100]={0};

    for(int i=0;i<e;i++){

        int u,v;
        scanf("%d %d",&u,&v);

        adj[u][v]=1;
        adj[v][u]=1;
    }


    int count=0;

    for(int i=0;i<n;i++){

        if(!visited[i]){
            dfs(i,n,adj);
            count++;
        }
    }

    printf("%d",count);
}
