//Given n, print an n-by-n checkerboard using X and O. 
//The top-left character must be X; adjacent horizontal and vertical cells alternate.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0){
                printf("X");
            }
            else {
                printf("O");
            }
        }
        printf("\n");
    }
    
    return 0;
}