//Online Shopping Bill Analysis
//An online shopping application stores the prices of N products selected by a customer.
//Calculate the total cost of the products and identify the most expensive and least expensive items.

#include <stdio.h>
int main(){
    float total_cost = 0.0f;
    // asking for nuber of purchase.
    int n;
    printf("Enter the number of product price you want to enter :");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive number of products.\n");
        return 1;
    }
    // defining array that stores prices
    float purchase[n];
    for (int i = 0;i < n;i++){
        printf("Enter the purchase price:");
        scanf("%f", &purchase[i]);
    }
    // total cost and expensive and least expensive items;
    for (int i = 0;i<n;i++){
        total_cost = total_cost + purchase[i];
    }
    float max_purchase = purchase[0];
    for (int i = 0; i < n; i++){
        if (purchase[i] > max_purchase){
            max_purchase = purchase[i];
        }
    }
    float least_purchase = purchase[0];
    for (int i = 0; i < n; i++){
        if (purchase[i] < least_purchase){
            least_purchase = purchase[i];
        }
    }
    printf("Total cost is: %.2f\n", total_cost);
    printf("The most expensive is: %.2f\n", max_purchase);
    printf("The least expensive is: %.2f\n", least_purchase);
    return 0;
}