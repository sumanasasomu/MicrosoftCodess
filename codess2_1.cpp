// void findSmallest(int n) 
// { 
//     int i, j=0; 
//     int res[MAX];
//     if (n < 10) 
//     { 
//         printf("%d", n+10); 
//         return; 
//     } 
//     for (i=9; i>1; i--) 
//     { 
//         while (n%i == 0) 
//         { 
//             n = n/i; 
//             res[j] = i; 
//             j++; 
//         } 
//     } 
//     if (n > 10) 
//     { 
//         printf('-1'); 
//         return; 
//     } 
//     for (i=j-1; i>=0; i--) 
//         printf("%d", res[i]); 
// } 
// int main(){
//     int n;
//     cin >> n;
//     findSmallest(n);
// }

def findSmallest(n): 
    if n < 10: 
        print n+10
        return      
    res = [] 
    for i in range(9,1,-1): 
        while n % i == 0: 
            n = n / i 
            res.append(i)      
    if n > 10: 
        print "Not Possible"
        return
    n = res[len(res)-1] 
    for i in range(len(res)-2,-1,-1): 
        n = 10 * n + res[i] 
    print n