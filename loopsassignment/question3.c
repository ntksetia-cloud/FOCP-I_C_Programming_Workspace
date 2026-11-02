//assignment question 3
#include <stdio.h>
int main () {
    /// DEFINING THE VARIABLES.
    int price;
    printf("Enter the price of item purchased:");
    scanf(" %d", &price);
    int quantity_purchased;
    // ENTERING THE VARIABLES FROM THE USER.
    printf("Enter the net quantity purchased:");
    scanf(" %d", &quantity_purchased);
    // CALCULATING THE TOTAL BILL.
    int Total_Bill = price * quantity_purchased;
    printf("The total bill of quantity purchased is :%d",Total_Bill);
    return 0;
}