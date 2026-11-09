//Given n, print an n-by-n hollow square. Print an asterisk on the first row, last row, first column, or last column. Print a space inside.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i==1 || i == n || j==1 || j==n){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}