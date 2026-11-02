//Given three positive integers A, B, and C representing the sides of a triangle, determine
//whether it is Equilateral, Isosceles, or Scalene. Assume the given sides form a valid
//triangle
#include <stdio.h>

const char *printtriangleType(int a, int b, int c) {
    if (a == b && b == c ) {
        return "Equilateral";
    } 
    else if (a == b || a == c || b == c) {
        return "Isosceles";
    } 
    else {
        return "Scalene";
    }
}

int main(void) {
    int A, B, C;
    scanf("%d,%d,%d",&A,&B,&C);
    printf("%s\n",printtriangleType(A, B, C));
    return 0;
}
