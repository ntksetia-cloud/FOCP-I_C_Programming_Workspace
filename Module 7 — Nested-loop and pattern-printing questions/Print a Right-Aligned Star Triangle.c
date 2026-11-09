//Given n, print a right-aligned triangle. Row 1 has one asterisk and row n has n asterisks. 
//Use leading spaces to align the right edges.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){ //outer loop control rows
        for (int j=n-i;j>0;j--){
            printf(" ");
        }
        for (int k =1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}