//Given n, print a centered pyramid with n rows. Row i contains 2i - 1 asterisks, preceded by enough spaces to center it.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}