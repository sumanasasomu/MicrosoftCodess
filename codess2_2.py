MAX = 100
def middleProduct(mat, n): 
    row_prod = 1
    col_prod = 1
    for i in range(n) : 
        row_prod *= mat[n // 2][i] 
        col_prod *= mat[i][n // 2] 
    sum = row_prod + col_prod
    rev = 0
    while(ans>0):
        dig = ans%10
        rev = rev*10+dig
        ans = ans//10
    print(rev);
def main():
    n = int(input())
    # matrix = []
    # for i in range(n):         
    #     a =[] 
    #     for j in range(n):  
    #          a.append(int(input())) 
    #     matrix.append(a)
main()

#include <iostream> 
using namespace std; 
const int MAX = 100; 
  
void middleProduct(int mat[][MAX], int n) 
{ 
  
    // loop for product of row and column 
    int row_prod = 1, col_prod = 1; 
    for (int i = 0; i < n; i++) { 
        row_prod *= mat[n / 2][i]; 
        col_prod *= mat[i][n / 2]; 
    } 
  
    // Print result 
    cout << "Product of middle row = "
         << row_prod << endl; 
  
    cout << "Product of middle column = "
         << col_prod; 
} 