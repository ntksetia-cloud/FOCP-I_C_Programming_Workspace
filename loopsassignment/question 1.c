// question 1 of assignment
#include <stdio.h>

int main () {
             /////DEFINING THE VARIABLES.
    int studentID , Age ;
    char Grade;
    float percentage;
             ////ASKING THE USER TO ENTER THE DATA.
    printf("enter the student id:\n");
    scanf("%d", &studentID);
    printf("enter the Age:\n");
    scanf(" %d", &Age);
    printf("enter the percentage:\n");
    scanf(" %f", &percentage);
    printf("enter the Grade:\n");
    scanf(" %c", &Grade);
              ////PRINTING THE DETAILS ENTERED BY THE USER.
    printf("\n--- Student Details ---\n");
    printf("Student ID: %d\n", studentID);
    printf("Age: %d\n", Age);
    printf("Grade: %c\n", Grade);
    printf("Percentage: %.2f\n", percentage);
    return 0; // RETURING THE VALUE FOR THE FUNCTION INT.

}

