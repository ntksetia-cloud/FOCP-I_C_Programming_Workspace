#include <stdio.h>
char calculategrade(int marks) {
    if (marks >= 90){
        return 'A';
    }
    else if (marks >= 80){
        return 'B';
    }
    else if (marks >= 70){
        return 'C';
    }
    else if (marks >= 60){
        return 'D';
    }
    else {
        return 'F';
    }

}
int main (void) {
    int M;
    printf("enter the marks");
    scanf("%d",&M);
    printf("%c\n",calculategrade(M));
    return 0;
}