#include <stdio.h>

int main(){
    int a[5];
    a[0] =  2;
    a[1] = -4;
    a[2] =  1;
    a[3] = -3;
    a[4] = -5;

    printf("NEGATIVE ELEMENT FORM ARRAY: ");
    for(int i = 0; i < 5; i++){
        if(a[i] < 0){
            printf("%d",a[i]);
        }
    }
    }