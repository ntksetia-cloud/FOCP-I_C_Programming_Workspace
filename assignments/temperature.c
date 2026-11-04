// Assignment question 9
#include <stdio.h>
int main () {
    // DEFINING THE VARIABLES.
    int temperature;
    // ENTERING THE VALUES ENTERED BY THE USER.
    printf("Enter the temperature in celsius:");
    scanf("%d",&temperature);
    //CALCULATING THE TEMPERATURE INTO FAHRENHEIT.
    float Fahrenheit = (temperature * 9 / 5) + 32.00 ;
    // PRINTING DOWN THE RESULT.
    printf("The temperature in fahrenheit is :%.2f\n",Fahrenheit);
    return 0;
}