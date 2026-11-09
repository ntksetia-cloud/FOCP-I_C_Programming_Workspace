//Given n, print n rows. On row i, print integers from 1 through i, separated by one space.
//Input format: One integer n (1 ≤ n ≤ 20).
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j = 1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}