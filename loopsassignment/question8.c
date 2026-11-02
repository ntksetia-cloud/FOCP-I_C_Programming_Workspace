// Assignment question 8
#include <stdio.h>
int main () {
    // DEFINING THE VARIABLES.
    int Basic_Salary;
    int Allowance;
    int Bonus;
    // ENTERING THE VALUES INTO THE VARIABLES.
    printf("Enter the basic salary of the employee:");
    scanf("%d",&Basic_Salary);
    printf("Enter the allowance of the salary;");
    scanf("%d",&Allowance);
    printf("Enter the bonus amount");
    scanf("%d",&Bonus);
    // CALCULATING THE FINAL SALARY.
    float Final_Salary = Basic_Salary + Allowance + Bonus;
    // PRINTING THE CALCULATED FINAL SALARY.
    printf("The final salary is:%.2f%%",Final_Salary);
    return 0;

}