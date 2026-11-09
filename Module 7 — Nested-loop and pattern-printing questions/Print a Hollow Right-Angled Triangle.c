//Given n, print the outline of a left-aligned right-angled triangle. 
//Print asterisks in the first column, on the diagonal boundary, and across the final row. Print spaces inside.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){ // for rows
        for(int j=1;j<=n;j++){ // for columns
            if(j==1 || j==i || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}