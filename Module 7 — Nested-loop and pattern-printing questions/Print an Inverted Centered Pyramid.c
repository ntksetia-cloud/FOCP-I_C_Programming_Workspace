//Given n, print an inverted centered pyramid. 
//The first row contains 2n - 1 asterisks; each next row has two fewer and one more leading space.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you want to print pattern:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
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