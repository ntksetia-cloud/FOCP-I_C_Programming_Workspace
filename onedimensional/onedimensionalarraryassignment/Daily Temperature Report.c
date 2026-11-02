//Daily Temperature Report
//The maximum temperatures recorded over N consecutive days are stored in an array. 
//Generate a report showing the average temperature, the number of days above the average, and the highest temperature recorded.

#include <stdio.h>
int main(){
    int sum = 0;
    int average;
    int days = 0;
    int n;
    printf("Enter the number of recorded temperature:");
    scanf("%d",&n);
    //defining the array temperature.
    float temperature[n];
    for (int i = 0; i < n; i++){
        printf("Enter the recorded temperature:");
        scanf("%f", &temperature[i]);
    }
    // average temperature , number of days above average and highest temperature
    for (int i = 0; i < n; i++){
        sum = sum + temperature[i];
    }
    average = sum / n;
    for (int i = 0; i<n; i++){
        if (temperature[i] > average){
            days++;
        }
    }
    int max_temperature = temperature[0];
    for (int i = 0; i < n; i++){
        if (temperature[i] > max_temperature){
            max_temperature = temperature[i];
        }
    }
    printf("The average of temperature is: %d\n",average);
    printf("The number of days above average are: %d\n",days);
    printf("The highest temperature:%d",max_temperature);
    return 0;
}