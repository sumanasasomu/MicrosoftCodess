#include<stdio.h>
#include<stdlib.h>
void floydWarshall (int *mat,int n,int x) { 
    int dist[n][n],sum=0;
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
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
        sum += dist[x][i];
    }
    printf("%d",sum);
}
int main(){
    int n,x;
    scanf("%d",&n);
    int *mat = (int*)malloc(n*n*sizeof(int));
    scanf("%d".&x);
    floydWarshall(mat,n,x);
}