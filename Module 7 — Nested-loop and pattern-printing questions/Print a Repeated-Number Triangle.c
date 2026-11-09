//Given n, print n rows. On row i, print the number i exactly i times, separated by one space.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}