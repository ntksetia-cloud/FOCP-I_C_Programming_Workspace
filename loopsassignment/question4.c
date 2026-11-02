// assignment question 4
#include <stdio.h>
int main() {
    // DEFINING THE VARIABLES.
    int value1; 
    int value2;
    int value3;
    // ASKING THE USER TO ENTER THE VALUES.
    printf("Enter the first value:");
    scanf("%d",&value1);
    printf("Enter the second value:");
    scanf("%d",&value2);
    printf("Enter the third value:");
    scanf("%d",&value3);
    //CALCULATING THE AVERAGE VALUE.
    float Average_value = (value1 + value2 + value3) / 3.0 ;
    //PRINTING THE VALUES.
    printf("The average value of entered value is: %.2f", Average_value);
    return 0;
}