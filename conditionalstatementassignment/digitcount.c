#include <stdio.h>
int main() {
    long long int n;
    int count=0;
    scanf("%lld",&n);
    if (n == 0) {
        count = 1;
    }
    else{
        while (n != 0){
        n = n / 10;
        count = count + 1;
        }
    }

    printf("%d",count);
    return 0;
    
    
}