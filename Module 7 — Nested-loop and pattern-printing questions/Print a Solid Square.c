//Given a positive integer n, print a square containing n rows and n columns of asterisks (*). Do not print spaces between asterisks.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        printf("****\n");
    }
    return 0;
}