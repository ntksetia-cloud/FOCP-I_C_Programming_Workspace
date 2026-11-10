//Given n, print a centered diamond. The upper half has n rows including the widest row; then print n - 1 rows in decreasing width.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    //upper half.
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    //lower half
    for (int i =n;i>=1;i--){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for (int j=2*i-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}