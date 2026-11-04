//Assignment question 7
#include <stdio.h>
int main() {
             // Defining the variables and entring the marks
    int marks1 ,marks2 , marks3, marks4, marks5;
    printf("Enter the marks of subject1: ");
    scanf("%d",&marks1);
    printf("Enter the marks of subject2: ");
    scanf("%d",&marks2);
    printf("Enter the marks of subject3: ");
    scanf("%d",&marks3);
    printf("Enter the marks of subject4: ");
    scanf("%d",&marks4);
    printf("Enter the marks of subject5: ");
    scanf("%d",&marks5);
              // Calculating total marks and percentage 
    int Total_Marks = marks1 + marks2 + marks3 + marks4 + marks5;
    float Percentage = Total_Marks / 500.0;
             // PRINTING DOWN THE FINAL RESULT.
    printf("The total marks of student is: %d\n",Total_Marks);
    printf("The total percentage obtained is: %.2f%%\n",Percentage);
    return 0;
}