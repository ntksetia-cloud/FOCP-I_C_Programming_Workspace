//Print consecutive positive integers across triangular rows. Row 1 has one number, row 2 has two,and so on. 
//Counting starts at 1 and continues across rows.
#include<stdio.h>
int main(){
    int count = 1;
    int n;
    printf("Enter the number lines you what to print pattern:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}