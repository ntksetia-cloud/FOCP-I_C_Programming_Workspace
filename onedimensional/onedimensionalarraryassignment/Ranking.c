//Ranking Without a Built-in Sorting Function
//A college wants to arrange students' marks in ascending order for statistical analysis.
//Process the given array to arrange the marks from lowest to highest without using any built-in sorting function.
#include <stdio.h>
int main(){
    int temp;
    int n;
    printf("Enter the number of marks you want to enter:");
    scanf("%d",&n);
    //defining the array that stores marks
    int marks[n];
    for (int i=0;i<n;i++){
        printf("Enter the marks:");
        scanf("%d",&marks[i]);
    }
    for(int i = 0; i < n; i++) //controls how many times sorting will be done.
    {
        for(int j = 0; j < n-i-1; j++) // this loop campares the values.
        {
            if(marks[j] > marks[j+1])
            {
                temp = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
            }
        }
    }
    printf("The ascendig order array is:");
    for (int i = 0; i<n; i++){
        printf("%d,",marks[i]);
    }
    return 0;
}