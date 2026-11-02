//Given a non-negative integer N, calculate N! using a do-while loop.
#include <stdio.h>
long long factorialusingdowhile(int n){
    int i = 1;
    long long int factorial = 1;
    do {
        factorial = factorial * i;
        i++;
    }
    while (i <= n);
    return factorial;
}
int main() {
    printf ("%lld",factorialusingdowhile(5));
    return 0;
}