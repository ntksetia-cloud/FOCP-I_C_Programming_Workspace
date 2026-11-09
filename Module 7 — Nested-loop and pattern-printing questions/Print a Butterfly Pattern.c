//Given an odd integer n, print a butterfly made of asterisks. 
//The top half widens row by row and the lower half mirrors it. Use spaces between the left and right wings.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){//rows
        for(int j=1;j<=i/2;j++){ // loop for first triangle.
            printf("*");
        }
        printf("\n");
        // for(int k=n;k>=i/2;k--){//loop for spaces
        //     printf("k");
        // }
        
        // for(int l=i/2;l>=1;l--){
        //     printf("*");
        // }
        // printf("\n");
    }
    return 0;
}