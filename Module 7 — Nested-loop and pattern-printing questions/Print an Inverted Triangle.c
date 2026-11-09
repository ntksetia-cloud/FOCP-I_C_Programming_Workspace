//Given n, print a left-aligned inverted triangle. The first row contains n asterisks; each following row contains one fewer.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        for (int j=n-i+1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}