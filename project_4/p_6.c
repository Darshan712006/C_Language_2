#include <stdio.h>

int main()
{
    int i, j,a = 5;

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++){
            printf("%d ",j);
        }
        for (j = i - 1; j >= i; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}