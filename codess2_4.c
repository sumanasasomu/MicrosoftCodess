#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define INF INT_MAX
void floydWarshall (int *mat,int n,int x) { 
    int dist[n][n],sum=0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            dist[i][j] = *(mat + i*n + j); 
    for (int k = 0; k < n; k++) {  
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < n; j++) {  
                if (dist[i][k] + dist[k][j] < dist[i][j]) 
                    dist[i][j] = dist[i][k] + dist[k][j]; 
            } 
        } 
    } 
    for(int i=0;i<n;i++){
        if(dist[x-1][i] <= 2)
            sum++;
    }
    printf("%d",sum-1);
}
int main(){
    int n,e,x;
    scanf("%d %d",&n,&e);
    int *mat = (int*)malloc(n*n*sizeof(int));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            if(i == j)
                *(mat + i*n +j) = 0;
            else
                *(mat + i*n +j) = INF;

    for (int i = 0; i < e; i++){ 
        int a,b;
        scanf("%d %d",&a,&b);
        *(mat + (a-1)*n + (b-1)) = *(mat + (b-1)*n + (a-1)) = 1;
    }
    scanf("%d",&x);
    floydWarshall(mat,n,x);
}