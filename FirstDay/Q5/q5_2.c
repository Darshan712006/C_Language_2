#include <stdio.h>

int main(){

    int a;

    printf("ENTER THE NUMBER:");
    scanf("%d",&a);

    if(a < 0)
    {
        printf("YOUR NUMBER IS NEGATIVE");
    }
    else if (a == 0)
    {
        printf("YOUR NUMBER IS NETURAL");
    }
    else{
        printf("YOUR NUMBER IS POSITIVE");
    }
    
}