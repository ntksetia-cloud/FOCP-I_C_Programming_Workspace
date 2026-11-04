#include <stdio.h>
#include <string.h>
int main(){
    char str1[20], str2[20];

    printf("Enter the word: ");
    scanf("%[^\n]19s", str1);

    int len = strlen(str1);
    for (int i = 0; i < len; i++) {
        str2[i] = str1[len - 1 - i];
    }

    str2[strlen(str1)] = '\0';

    printf("Copied string: %s", str2);

    return 0;
}