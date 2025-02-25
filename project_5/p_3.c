#include <stdio.h>

int main()
{

    int a[3][3];
    a[0][0] = 2;
    a[0][1] = 4;
    a[0][2] = 1;
    a[1][0] = 3;
    a[1][1] = 5;
    a[1][2] = 4;
    a[2][0] = 8;
    a[2][1] = 2;
    a[2][2] = 6;

    int t[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    printf("THE TRANSPOSE MATRIX OF AN ARRAY:- \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}