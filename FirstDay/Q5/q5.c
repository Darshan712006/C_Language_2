#include <stdio.h>

int main(){
    int a,b;

    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);

    if(a < b){
        printf("THE MINIMUM NUMBER IS: %d",a);
    }
    else{
        printf("THE MINIMUM NUMBER IS: %d",b);
    }
}