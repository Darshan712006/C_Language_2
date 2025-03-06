#include <stdio.h>

int main(){
    int a[5] = {10,9,8,7,6};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++){
            printf("_");
        }
        for(int j = i; j < 5; j++){
            printf("%d",a[j]);
        }
        printf("\n");

    }
}