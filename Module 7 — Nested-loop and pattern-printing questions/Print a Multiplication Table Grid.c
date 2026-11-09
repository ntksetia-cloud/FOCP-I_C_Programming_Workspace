//Given n, print an n-by-n multiplication grid. At row i and column j, print i multiplied by j.
//Separate values with one space.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){//for rows
        for (int j=1;j<=n;j++){//for column
            printf("%d",i*j);
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}
