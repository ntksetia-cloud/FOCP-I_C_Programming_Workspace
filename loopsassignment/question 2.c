// assignment question 2
#include <stdio.h>
int main() {
            ///DEFINING THE VARIABLES
    int age;
    float height;
    char grade;
            ///ASING THE DETAILS FROM THE USER AND GIVING VALUES TO THE VARIABLES.
    printf("enter the age:\n");
    scanf("%d",&age);
    printf("enter the height(m):\n");
    scanf("%f",&height);
    printf("enter the grade:\n");
    scanf (" %c",&grade);
           ///PRINTING THE VALUES ENTERED BY THE USER.
    printf("//////////USER DETAILS ///////\n");
    printf("age: %d\n",age);
    printf("height: %f\n",height);
    printf("grade: %c\n",grade);
    return 0;
}