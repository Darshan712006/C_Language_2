#include <stdio.h>

int main(){
    int num,a,b,sum;

    printf("ENTER YOUR NUMBER:-");
    scanf("%d",&num);

    b = num %10;

    a = num %100;

    sum = a + b;

    printf("the sum of first number and last number is:-",sum);
}