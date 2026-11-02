//Given a positive integer N, determine whether it is a Special Number.
#include <stdio.h>
int specialnumber(int n) {
    int sum;
    sum = (n/10) + (n%10);
    if (n > 10 && n < 99 && sum == 10){
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    printf("%d",specialnumber(10));
    return 0;
}