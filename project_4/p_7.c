#include <stdio.h>

int main(){
    int i,j,a = 5;
    for(i = a; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}