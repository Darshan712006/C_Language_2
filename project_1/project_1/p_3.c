#include <stdio.h>

int main (){
    
    int a, b, thirdAngle;

    printf("Enter the first angle : \n");
    scanf("%d",&a);
    printf("Enter the second angle : \n");
    scanf("%d",&b);

    thirdAngle = 180 - (a+b);
    printf("Thrid angle is : ");
    printf("%d",thirdAngle);
}