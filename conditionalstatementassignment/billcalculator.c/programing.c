#include <stdio.h> 
long long calculateelectricitybill(long long units) {
    long long bill = 0;
    if (units <= 100) {
        bill = units *2;
    }
    else if (units <= 200) {
        bill = (100 * 2) + (units - 100 )*3; 
    }
    else if (units <= 300) {
        bill = (100 * 3) + (100 * 2) + (units - 200) *5 ;
    }
    else {
        bill = (100 * 2) + (100 * 3) + (100 * 5) + (units - 300)*7;
    }
    return bill;

}

int main(void) {
    int u;
    printf("");
    scanf("%d",&u);
    printf("%lld\n",calculateelectricitybill(u));
    return 0;

}