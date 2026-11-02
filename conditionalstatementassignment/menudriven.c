#include <stdio.h>
void runmenu(int choice, int n){
    int ans = 0;
    if (choice == 1){
        printf("%d", n * n);
    }
    else if (choice == 2) {
        printf("%d", n * n * n);
    }
    else if (choice == 3){
        if (n%2==0){
            printf("Even");
        }
        else {
            printf("Odd");
        }
    }
    else if (choice == 4){
        printf("program ended");
    }

}

int main(void){
    int Choice;
    printf("enter the choice from 1 to 4");
    scanf("%d",&Choice);
    int N;
    printf ("enter a number");
    scanf("%d",&N);
    runmenu(Choice,N);
    return 0;
}