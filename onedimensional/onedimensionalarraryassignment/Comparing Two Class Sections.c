//Comparing Two Class Sections
//The marks of students from two different sections are stored in separate arrays.
//Combine the two sets of marks into a third array, preserving the original order within each section.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of records you want to enter:");
    scanf("%d",&n);
    //defining two different arrays.
    int sectionA[n];
    for (int i=0; i<n;i++){
        printf("Enter the marks:");
        scanf("%d",&sectionA[i]);
    }
    int sectionB[n];
    for (int i=0; i<n;i++){
        printf("Enter the marks:");
        scanf("%d",&sectionB[i]);
    }
    //checking the condition
    int new_array[n+n];
    for(int i = 0; i<n; i++){
        new_array[i] = sectionA[i];
        new_array[i + n] = sectionB[i];
    }
    for (int i = 0; i < n + n; i++) {
        printf("%d ", new_array[i]);
    }


    return 0;
}