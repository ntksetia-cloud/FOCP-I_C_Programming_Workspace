//Given two integers A and B and an operator, perform the specified arithmetic operation.
#include <stdio.h>
long long calculateOperation(long long a,long long b,char op) {
    long long int ans = 0;
    if (op == '+'){
        ans = a + b;
        return ans;
    }
    else if (op == '-'){
        ans = a - b;
        return ans;
    }
    else if (op == '*') {
        if (b != 0){
            ans = a / b;
            return ans;
        }
        else {
            return 0;
        }
    }
    else if (op == '/'){
        ans = a / b;
        return ans;
    }
    else if (op == '%'){
        ans = a % b;
        return ans;
    }
    else {
        return 0;
    }

}

int main (void) {
    long long int A,B;
    printf("enter the two number\n");
    scanf ("%lld %lld", &A, &B);
    char operation_sign;
    printf("enter the sign of operation");
    scanf(" %c", &operation_sign);
    printf("%lld, %c\n",calculateOperation(A,B,operation_sign));
    return 0;
}