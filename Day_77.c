/*
day 77 - check if graph is connected

Problem: Check whether an undirected graph is connected.

Input:
- n vertices
- e edges

Output:
- Print "Connected" or "Not Connected"
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

    dfs(0,n,adj);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            printf("Not Connected");
            return;
        }
    }

    printf("Connected");
}
