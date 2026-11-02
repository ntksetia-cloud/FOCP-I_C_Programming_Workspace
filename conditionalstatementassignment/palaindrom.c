#include <stdio.h>

int main() {
    int n;
    int original;
    int reverse = 0; // reverse will get the digit in reverse order
    int digit;

    printf("Enter a number: ");
    scanf("%d",&n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome number");
    else
        printf("Not  palindrome number");

    return 0;
}