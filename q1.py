import sys
def sumOfDigit(n) :  
    sum = 0;  
    while (n > 0) : 
        sum += n % 10;  
        n = n // 10;  
    return sum;  

def sortArr(arr, n) : 
    vp = [];  
    for i in range(n) : 
        vp.append([sumOfDigit(arr[i]), arr[i]]);   
    vp.sort() 
    for i in range(len(vp)) : 
        print(vp[i][1], end = " "); 

if __name__ == "__main__" :   
    n = int(input())
    arr = []
    for i in range(n):
        x = [int(i) for i in input().split()]
        arr.append(x)  
    sortArr(arr, n);  