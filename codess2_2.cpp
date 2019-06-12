#include <iostream> 
using namespace std; 
void middleProduct(int *mat, int n) {  
    int row_prod = 1, col_prod = 1; 
    for (int i = 0; i < n; i++) { 
        row_prod *= *(mat + n*(n / 2) + i); 
        col_prod *= *(mat + i*n + (n / 2)); 
    } 
    int sum = row_prod + col_prod;
    int rev,rem;
    while(sum != 0){
        rem = sum%10;
        rev = rev*10 + rem;
        sum /= 10;
    }
    cout << rev;
    return;
} 
int main(){
    int n;
    cin >> n;
    int *arr = (int *)malloc(n * n * sizeof(int)); 
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> *(arr+ i*n + j);
    middleProduct(arr,n);
    return 0;
}