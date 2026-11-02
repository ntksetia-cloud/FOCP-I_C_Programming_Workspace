//question 3 series
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float a, r, term, sum = 0;  // a = first term , r = common ratio , n = number of terms

    printf("Enter first term (a): ");
    scanf("%f", &a);

    printf("Enter common ratio (r): ");
    scanf("%f", &r);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    term = a;

    for (i = 1; i <= n; i++) {
        sum = sum + term;
        term = term * r;
    }

    printf("Sum of geometric series = %f\n", sum);

    return 0;
}