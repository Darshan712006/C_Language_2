#include <stdio.h>

int main()
{
    int i, j, k,a = 5;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j > 5; j++){
            printf(" ");
        }
        for (k = i; k <= 5; k++){
            printf("%d ", k);
        }
        for (k = 5 - 1; k >= i; k--){
        }
        printf("\n");
    }
}