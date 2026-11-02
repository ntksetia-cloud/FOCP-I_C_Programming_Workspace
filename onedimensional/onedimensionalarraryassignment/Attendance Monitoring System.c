//Attendance Monitoring System
//The attendance percentage of N students is stored in an array. The college considers
//students eligible for an examination only if their attendance is at least 75%. Determine
//how many students are eligible and how many fall short of the requirement.

#include <stdio.h>
int main (){
    int eligible=0;
    int noteligible=0;
    // asking for number of record.
    int n;
    printf("Enter the number of student attendance record you want to enter:");
    scanf("%d",&n);
    // defining an array.
    float attendance[n];
    for (int i = 0; i<n;i++){
        printf("Enter the attendance percentage");
        scanf("%f", &attendance[i]);
    }
    // checking the condition
    for (int i = 0;i < n;i++){
        if(attendance[i] >= 75){
            eligible++;
        }
        else if (attendance[i] < 75){
            noteligible++;
        }
    }
    printf("Number of student eligible are: %d\n",eligible);
    printf("Number of student not eligle are: %d",noteligible);
    return 0;
}