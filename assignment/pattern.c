//#include <stdio.h>
// int patterns(int n){
//     for (int i=0;i<n;i++){
//         for (int j = i + 1;j>0;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// int main(){
//     int n;
//     printf("enter the number of lines");
//     scanf("%d",&n);
//     printf("%d",patterns(n));
//     return 0;
// }
#include <stdio.h>

int main() {
    int row, col;

    for (row = 0; row < 6; row++) {
        for (col = 0; col < 7; col++) {
            if ((row == 0 && col % 3 != 0) ||
                (row == 1 && col % 3 == 0) ||
                (row - col == 2) ||
                (row + col == 8)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}