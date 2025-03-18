#include <stdio.h>

int main(){

    int a;
    for (int i=5; i>0; i--){
    a = i;

    
        for ( int j = 5; j >= i; j++)
        {
            printf("%d",j);
            a++;

        }
        printf("\n");

    }
}

    