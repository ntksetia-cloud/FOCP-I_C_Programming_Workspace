//Detecting a Performance Drop.A student's marks across N consecutive assessments are stored in an array. 
//Identify the assessments in which the student's marks decreased compared with the immediately preceding assessment, and count the total number of such decreases.
#include <stdio.h>
int main() {
    int Total_performance_drop=0;
    int n;
    printf("Enter the number of marks of assessments:");
    scanf("%d",&n);
    //defining the array that stores the marks
    int marks[n];
    for (int i=0; i<n; i++){
        printf("Enter the marks of student:");
        scanf("%d",&marks[i]);
    }
    for (int i=0;i<n;i++){
        if (marks[i]>marks[i+1]){
            Total_performance_drop++;
        }
    }
    printf("The count of perfromance drop is: %d",Total_performance_drop);
    return 0;
}