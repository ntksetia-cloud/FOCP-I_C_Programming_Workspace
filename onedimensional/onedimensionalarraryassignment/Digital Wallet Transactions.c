//Digital Wallet Transactions
//A digital wallet records N transactions, where positive values represent money received and negative values represent money spent.
//Calculate the net change in the wallet balance and count the number of credit and debit transactions separately.
#include <stdio.h>
int main(){
    int credit = 0;
    int debit = 0;
    int balance = 0;
    int n;
    printf("Enter the total number of transactions made:");
    scanf("%d",&n);
    //defining the array for the transactions.
    float transaction[n];
    for (int i = 0;i<n;i++){
    printf("Enter the transaction made: ");
    scanf("%f", &transaction[i]);
    }
    for (int i = 0; i<n; i++){
        balance = balance + transaction[i];
    }
    for (int i = 0;i<n;i++){
        if(transaction[i] > 0){
            credit++;
        }
        else if(transaction[i] < 0){
            debit++;
        }
    }
    printf("The final balance is: %d\n",balance);
    printf("The number of credit is: %d\n",credit);
    printf("The number of debit is: %d",debit);
    return 0;
}