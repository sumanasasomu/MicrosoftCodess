// #include <iostream> 
// using namespace std; 
// int* findSmallest(int m, int s) 
// {
//     int a=0,b=-1; 
//     int *zero = &a;
//     int *np = &b;

//     // If sum of digits is 0, then a number is possible 
//     // only if number of digits is 1. 
//     if (s == 0) 
//     { 
//         if(m == 1) return zero;
//         else return np;
//     }  
//     // Sum greater than the maximum possible sum. 
//     if (s > 9*m) 
//     { 
//         return np;
//     } 
//     // Create an array to store digits of result 
//     int *res = new int[m]; 
//     // deduct sum by one to account for cases later 
//     // (There must be 1 left for the most significant 
//     //  digit) 
//     s -= 1; 
//     // Fill last m-1 digits (from right to left) 
//     for (int i=m-1; i>0; i--) 
//     { 
//         // If sum is still greater than 9, 
//         // digit must be 9. 
//         if (s > 9) 
//         { 
//             res[i] = 9; 
//             s -= 9; 
//         } 
//         else
//         { 
//             res[i] = s; 
//             s = 0; 
//         } 
//     } 
//     // Whatever is left should be the most significant 
//     // digit. 
//     res[0] = s + 1;  // The initially subtracted 1 is 
//                      // incorporated here.  
//     return res;
// } 
// int main() 
// { 
//     int m ;
//     cin >> m;
//     int n;
//     cin >> n;
//     int *ans = findSmallest(m, n); 
//     for(int i=0;i<m;i++){
//         cout << *(ans+i);
//     }
//     return 0; 
// } 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    cout << ();
    return 0;
}
