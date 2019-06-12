// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int arr[100][100];
//     int i,j,k,n,maxk=0,maxsum=0;
//     printf("Enter n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//         for(j=0;j<n;j++)
//             scanf("%d",&arr[i][j]);

//     for(k=1;k<=n/2;k++){
//         int sum=0;
//         i=j=n/2; j=j-k;
//         while(j < n/2){
//             sum+=arr[i][j];
//             i--;
//             j++;
//         }
//         i=j=n/2; i=i-k;
//         while(i < n/2){
//             sum+=arr[i][j];
//             i++;
//             j++;
//         }
//         i=j=n/2; j=j+k;
//         while(j > n/2){
//             sum+=arr[i][j];
//             j--;
//             i++;
//         }
//         i=j=n/2; i=i+k;
//         while(i > n/2){
//             sum+=arr[i][j];
//             i--;
//             j--;
//         }
//         if(sum > maxsum){
//             maxsum=sum;
//             maxk=k;
//         }
//     }
//     i=j=n/2; j=j-maxk;
//     while(j < n/2){
//         printf("%d ",arr[i][j]);
//         i--;
//         j++;
//     }
//     i=j=n/2; i=i-maxk;
//     while(i < n/2){
//         printf("%d ",arr[i][j]);
//         i++;
//         j++;
//     }
//     i=j=n/2; j=j+maxk;
//     while(j > n/2){
//         printf("%d ",arr[i][j]);
//         j--;
//         i++;
//     }
//     i=j=n/2; i=i+maxk;
//     while(i > n/2){
//         printf("%d ",arr[i][j]);
//         i--;
//         j--;
//     }
//     printf("\nSum= %d\n",maxsum);
// }

//  int *arr = (int *)malloc(r * c * sizeof(int)); 

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,k,n,maxk=0,maxsum=0;
    scanf("%d",&n);
    int *arr = (int *)malloc(n * n * sizeof(int)); 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",(arr + i*n + j));

    for(k=1;k<=n/2;k++){
        int sum=0;
        i=j=n/2; j=j-k;
        while(j < n/2){
            sum += *(arr + i*n + j);
            i--;
            j++;
        }
        i=j=n/2; i=i-k;
        while(i < n/2){
            sum += *(arr + i*n + j);
            i++;
            j++;
        }
        i=j=n/2; j=j+k;
        while(j > n/2){
            sum += *(arr + i*n + j);
            j--;
            i++;
        }
        i=j=n/2; i=i+k;
        while(i > n/2){
            sum += *(arr + i*n + j);
            i--;
            j--;
        }
        if(sum > maxsum){
            maxsum=sum;
            maxk=k;
        }
    }
    i=j=n/2; j=j-maxk;
    while(j < n/2){
        printf("%d ",*(arr + i*n + j));
        i--;
        j++;
    }
    i=j=n/2; i=i-maxk;
    while(i < n/2){
        printf("%d ",*(arr + i*n + j));
        i++;
        j++;
    }
    i=j=n/2; j=j+maxk;
    while(j > n/2){
        printf("%d ",*(arr + i*n + j));
        j--;
        i++;
    }
    i=j=n/2; i=i+maxk;
    while(i > n/2){
        printf("%d ",*(arr + i*n + j));
        i--;
        j--;
    }
    printf("\n%d",maxsum);
}