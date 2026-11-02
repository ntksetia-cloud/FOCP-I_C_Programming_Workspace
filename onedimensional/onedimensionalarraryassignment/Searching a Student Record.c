//Searching a Student Record The roll numbers of students registered for a workshop are stored in an array. 
//When a particular roll number is entered, determine whether the student is registered and, if so, report the position at which the roll number occurs.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number roll number you want to enter:");
    scanf("%d",&n);
    //defining the array that stores roll number.
    int roll_number[n];
    for (int i = 0; i<n; i++){
    printf("Enter the roll number of student registered:");
    scanf("%d",&roll_number[i]);
    }
    int number;
    printf("Enter the roll number you want to check:");
    scanf("%d",&number);
    //conditon
    for (int i = 0; i<n; i++){
        if (number == roll_number[i]){
            printf("The roll number is registered \n");
            printf("The position of roll number is %d",i);
        }
    }
    return 0;
}