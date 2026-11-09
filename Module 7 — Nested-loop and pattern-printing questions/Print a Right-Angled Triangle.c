//Given n, print a left-aligned triangle. Row i must contain exactly i asterisks, for i from 1 to n.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        for (int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}