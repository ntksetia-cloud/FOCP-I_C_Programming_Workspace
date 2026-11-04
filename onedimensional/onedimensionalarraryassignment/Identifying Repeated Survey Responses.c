//Identifying Repeated Survey Responses
//A college survey records numerical ratings from students. 
//Determine the frequency of each distinct rating and display each rating only once along with its occurrence count.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of records you want to enter:");
    scanf("%d",&n);
    //defining the array that stores ratings.
    int ratings[n];
    for(int i = 0; i<n; i++){
        printf("Enter the ratings:");
        scanf("%d",&ratings[i]);
    }
    
    
    return 0;
}