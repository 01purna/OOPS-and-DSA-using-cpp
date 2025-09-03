// implementation of dfs and bfs using c

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int adj[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1;
int rear = -1;
void addedge(int u, int v){
    adj[u][v]=1;
    adj[v][u]=1;//for undirect graph
}
void DFS(int v, int n){
    printf("%d", v);
    visited[v]=1;
    for(int i=0; i<n; i++){
        if(adj[v][i] && visited[i]){
            DFS(i, n);
        }
    }
}
void enqueue(int v){
    if(rear == MAX-1){
        return;
    }
    if(front==-1){
        front=0;     
    }
    front=0;
    queue[++rear]=v;
}
int dequeue(){
    if(front==-1 || front > rear){
        return -1;
    }
    return queue[front++];
}
void BFS(int start, int n){
    for(int i=0; i<n; i++)
        visited[i]=0;
    enqueue(start);
    visited[start]=1;
    while(front<=rear){
        int v = dequeue();
        printf("%d", v);
        for(int i=0; i<n; i++){
            if(adj[v][i] && visited[i]){
                enqueue(i);
                visited[i]=1;
            }
        }
    }
}

int main(){
    int n, e, u, v, start;
    printf("enter the number of vertices:");
    scanf("%d", &n);
    printf("enter the number of edge:");
    scanf("%d", &e);
    printf("enter egege(u, v):\n");
    for(int i= 0; i<e; i++){
        scanf("%d %d", &u ,&v);
        addedge(u, v);
    }
    printf("enter starting vertext of DFS:");
    scanf("%d", &start);
    for(int i=0; i<n; i++){
        visited[i]=0;
    }
    printf("DFS traversal : ");
    DFS(start, n);
    printf("\n");

    printf("enter starting vertext of BFS:");
    scanf("%d", &start);

    front = rear = -1;
    printf("BFS traversal: ");
    BFS(start, n);
    printf("\n");
    return 0;
}