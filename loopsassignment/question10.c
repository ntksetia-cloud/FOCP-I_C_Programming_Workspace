// assignment question 10
#include <stdio.h>
int main () {
                // DEFINING THE VARIABLES.
    int Product_ID;
    int Product_Price;
    int Quantity;
    int Discount_Percentage;
                  // asking the values from the user
    printf("Enter the product id:");
    scanf(" %d",&Product_ID);
    printf("enter the product price:");
    scanf("%d",&Product_Price);
    printf("Enter the quantity:");
    scanf("%d",&Quantity);
    printf("Enter the discount percentage:");
    scanf("%d",&Discount_Percentage);
                  // calculating the amounts
    int subtotal = Product_Price * Quantity;
    int Discount_Amount = subtotal * Discount_Percentage / 100;
    int Final_Amount = subtotal - Discount_Amount;
                   // Printing the details
    printf("/////////////ALL DETAILS OF PURCHASED///////////\n");
    printf("Product ID:%d\n",Product_ID);
    printf("Subtotal:%d\n",subtotal);
    printf("Discount Amount:%d\n",Discount_Amount);
    printf("Final payable amount:%d\n",Final_Amount);

    return 0;
    
} 