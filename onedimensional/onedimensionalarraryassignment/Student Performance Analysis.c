//Student Performance Analysis
//A faculty member has collected the marks of N students in a programming test.
//Develop a program that processes these marks and reports the class average, the
//highest marks obtained, and the lowest marks obtained.

#include <stdio.h>
int main(){
    int sum = 0;
    //asking for the number of records.
    int n;
    printf("Enter the number of record of the student");
    scanf("%d",&n);
    //defining an array that stores the records.
    float marks[n];
    for(int i = 0; i < n; i++){
        printf("Enter the marks:");
        scanf("%f",&marks[i]);
    }
    // loop for calculating the sum of marks.
    for (int i = 0; i<n; i++){
        sum = sum + marks[i];
    }
    float average = sum / n;
    printf("The average marks of class is %f\n",average);

    // hightest marks scored
    int max = marks[0];
    for (int i = 0; i < n; i++){
        if (marks[i] > max){
            max = marks[i];
        }
    }
    printf("The highest marks are: %d\n",max);

    // lowest marks
    int lowest = marks[0];
    for (int i = 0; i<n; i++){
        if (marks[i] < lowest){
            lowest = marks[i];
        }
    }
    printf("The lowest marks are: %d\n",lowest);
    return 0;
}