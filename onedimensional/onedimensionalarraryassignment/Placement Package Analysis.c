//Placement Package Analysis,A placement coordinator maintains the salary packages offered to students during campus recruitment. 
//Given the packages of N students, determine the highest package,the second-highest distinct package, and the number of students receiving packages above a specified threshold.
#include <stdio.h>
int main(){
    int total_student=0;
    int threshold_package;
    printf("Enter the threshold package:");
    scanf("%d",&threshold_package);
    // asking for the number of records
    int n;
    printf("Enter the number of record for the placement pakages:");
    scanf("%d",&n);
    // defining the array for the record of pakages.
    float package[n];
    for (int i = 0; i<n; i++){
        printf("enter the packages offered: ");
        scanf("%f",&package[i]);
    }
    // highest packages,second highest packages and number of student above threshold packages.
    int max_package = package[0];
    for (int i = 0; i<n; i++){
        if (package[i]>max_package){
            max_package = package[i];
        }
    }
    int second_highest_package;
    for (int i = 0; i<n; i++){
        if (max_package > package[i] && package[i] > second_highest_package){
            second_highest_package = package[i];
        }
    }
    for (int i = 0; i<n; i++){
        if (package[i]>threshold_package){
            total_student++;
        }
    }
    printf("The highest package is: %d\n",max_package);
    printf("The second highest package is: %d\n",second_highest_package);
    printf("The number of student above threshold package are: %d\n",total_student);
    return 0;
}