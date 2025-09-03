//implemantaion of dijkstra's algorithm
#include <stdio.h>
#include <limits.h>
#define MAX 10
#define INF 99999
int graph[MAX][MAX];
int dist[MAX];
int visited[MAX];
void dijkstra(int n, int start){
    for(int i = 0; i<n; i++){
        dist[i] = IFN;
        visited[i]=0;
    }
    dist[start]=0;
    for(int cout = 0; cout<n-1; cout++){
        int min=IFN, u;
        for(int i=0; i<n; i++){
            if(visited[i] && dist[i<=min]){
                min=dist[i];
                u=i;
            }
        visited[u]=1;
        for(int v=0; v<n; v++){
            if(visited[v]&&graph[u][v]&&dist[u]+graph[u][v]<dist[v]){
                dist[v]= dist[u]+graph[u][v];
            }
        }
    }
}
    printf("vertx\t distance from source%d\n", start);
    for(int i=0; i<n; i++){
        printf("%d\t", i, dist[i]);
    }
}
int main(){
    int n,e,u,vw,start;
    printf("enter number of verteces: ");
    scanf("%d", &n);
    printf("enter number of edges: ");
    scanf("%d", &e);
    for(int i=0; i<e; i++){
        for(int j=0; j<n; j++){
            graph[i][j]=0;
        }
    }
    printf("enter edge (u v w):\n");
    for(int i=0; i<n; i++){
        scanf("%d %d, %d", &u, &v, &w);
        graph[u][v]=w;
        graph[v][u]=w; // for undirected graph
    }
    printf("enter starting vertex: ");
    scanf("%d", &start);
    dijkstra(n, start);
    return 0;
}

