//Electricity Consumption Analysis A household records its electricity consumption for N days. 
//Given the daily consumption values, determine the total consumption, the number of days on which consumption exceeded a specified limit, and the day with the maximum consumption.
#include <stdio.h>
int main() {
    int total_consumption = 0;
    int days = 0;
    int day;
    int limit;
    printf("Enter the consumption limit of a household:");
    scanf("%d",&limit);
    // asking for number of records
    int n;
    printf("Enter the number of record of electricity consumption:");
    scanf("%d",&n);
    // defining the array 
    int consumption[n];
    for (int i=0; i<n; i++){
        printf("Enter the consumption:");
        scanf("%d",&consumption[i]);
    }
    //total consumption,number of days consumption was above specified limit,day with maximum consumptio
    for (int i=0; i<n; i++){
        total_consumption = total_consumption + consumption[i];
        if (consumption[i] >= limit){
            days++;
        }
    }
    int max_consumption_day = consumption[0];
    for (int i=0; i<n; i++){
        if (max_consumption_day < consumption[i]){
            max_consumption_day = consumption[i];
        }
        if (max_consumption_day == consumption[i]){
            day = i+1;
        }
    }
    printf("The total consumption is: %d\n",total_consumption);
    printf("The number of days consumption was above limit is: %d\n",days);
    printf("The day with maximum consumption is: %d",day);
    return 0;
}