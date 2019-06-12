#include <bits/stdc++.h> 
using namespace std; 
void reachdest(int *mat,int *vis, int n) {  
    
    return;
} 
int main(){
    int n;
    cin >> n;
    int *arr = (int *)malloc(n * n * sizeof(int));
    int *vis = (int *)malloc(n * n * sizeof(int));
    memset(vis,0,n*n*sizeof(int)); 
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> *(arr+ i*n + j);
    return 0;
}