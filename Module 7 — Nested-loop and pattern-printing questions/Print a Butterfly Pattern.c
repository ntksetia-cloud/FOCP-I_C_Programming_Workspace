//Given an odd integer n, print a butterfly made of asterisks. 
//The top half widens row by row and the lower half mirrors it. Use spaces between the left and right wings.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);

    // Top half
    for (int i = 1; i <= n / 2 + 1; i++) {

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= 2 * (n / 2 + 1 - i); j++) {                 //2*(n/2+1-i) is used for spaces between the triangle.
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Bottom half
    for (int i = n / 2; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= 2 * (n / 2 + 1 - i); j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}