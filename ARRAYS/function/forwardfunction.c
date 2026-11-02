// forward function program
#include <stdio.h>
int add(int a, int b);
int main(){
    int a,b;
    printf("enter:");
    scanf("%d %d",&a,&b);
    printf("%d",add(a,b));
    return 0;
}
int add(int a, int b){
    return (a+b);
}