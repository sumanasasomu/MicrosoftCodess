
#include <bits/stdc++.h> 
using namespace std; 
int sumOfDigit(int n) { 
    int sum = 0; 
    while (n > 0) { 
        sum += n % 10; 
        n = n / 10; 
    } 
    return sum; 
}  
void sortArr(int arr[], int n) {  
    vector<pair<int, int> > vp; 
    for (int i = 0; i < n; i++) { 
        vp.push_back(make_pair(sumOfDigit(arr[i]), arr[i])); 
    }
    sort(vp.begin(), vp.end());  
    for (int i = 0; i < vp.size(); i++) 
        cout << vp[i].second << " "; 
} 
int main() { 
    int n; 
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sortArr(arr, n); 
    return 0; 
} 