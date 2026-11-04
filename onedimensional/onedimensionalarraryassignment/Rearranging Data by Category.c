//Rearranging Data by Category
//A system stores a sequence of integers representing transaction codes. 
//Rearrange the sequence so that all even values appear before all odd values, while ensuring that every original value is retained.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the total number of transction codes:");
    scanf("%d",&n);
    //defining array
    int transctions[n];
    for(int i=0;i<n;i++){
        printf("Enter the transactions codes:");
        scanf("%d",&transctions[i]);
    }
    // arranging array in even then odd number order.
    int sorted_array[n];
    int k = 0;
    for (int i=0;i<n;i++){
        if(transctions[i] % 2 == 0){
            sorted_array[k]=transctions[i];
            k++;
        }
    }
    for (int i=0;i<n;i++){
        if(transctions[i] % 2 != 0){
            sorted_array[k]=transctions[i];
            k++;
        }
    }
    for (int i=0;i<n;i++){
        printf("%d,",sorted_array[i]);
    }
    return 0;
}