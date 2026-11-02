// Assignment question 5
#include <stdio.h>
int main () {
    // DEFINING THE VARIABLES.
    int values1;
    int values2;
    // ASKING USER TO ENTER THE VALUES.
    printf("enter the first value: ");
    scanf("%d", &values1);
    printf("enter the second value: ");
    scanf("%d", &values2);
    // SWAPING THE VALUES.
    int value1 = values2;
    int value2 = values1;
    //PRINTING THE SWAPED VALUES.
    printf("/////// THE SWAPED VALUES ///////\n");
    printf("%d\n",value1);
    printf("%d\n",value2);
    return 0;
}