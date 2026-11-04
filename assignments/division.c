// Assignment question 6
#include <stdio.h>
int main() {
    // DEFINING THE VARIABLES.
    int value1;
    int value2;
    // ASKING THE USER TO ENTER THE VALUES.
    printf("Enter the first value:");
    scanf("%d",&value1);
    printf("Enter the second value:");
    scanf("%d",&value2);
    // CALCULATING THE QUOTIENT AND PRINTING THE OUTPUT.
    int Quotient = value1 / value2 ;
    printf("the quotient is: %d\n",Quotient);
    // CALCULATING THE REMAINDER AND PRINTING THE OUTPUT.
    int remainder = value1 % value2;
    printf("The reminder is: %d\n",remainder);
    return 0;
    
}