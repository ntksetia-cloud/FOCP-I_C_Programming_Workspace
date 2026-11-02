 #include <stdio.h>

//Read integers continuously until the user enters 0.
//Calculate and print the sum of all non-zero numbers entered.
//You must use a while loop.

long long sumunitzero(long long int n) {
    long long ans = 0;
    while (n != 0){
        ans = ans + n;
        scanf("%lld", &n); // to enter the next value after the first value.
    }
    return ans;
}
int main(void) {
    long long int f;
    printf("enter sequence");
    scanf("%lld", &f);
    printf("%lld",sumunitzero(f));
    return 0;
}