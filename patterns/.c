#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2*n-1; i++){ //loop controls the rows.
        for(int j = 0; j < 2*n-1; j++) // loop contols the coloumns.
        {
            int top_line = i;         // i=rows
            int left_line = j;        // j=columns
            int bottom_line = 2*n-2-i;//rows
            int right_line = 2*n-2-j;//columns

            int min = top_line;

            if(left_line < min)
                min = left_line;

            if(bottom_line < min)
                min = bottom_line;

            if(right_line < min)
                min = right_line;

            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}
