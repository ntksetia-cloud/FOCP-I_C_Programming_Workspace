#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, len;
    char temp;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    len = strlen(str);
    printf("%d", len);
    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed string: %s", str);
    return 0;
}