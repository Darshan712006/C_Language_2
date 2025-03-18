#include <stdio.h>

int main(){
 
    int a;
    int count = 0;

    printf("ENTER THE TOTAL DIGITS:- ");
    scanf("%d",&a);

    while (a > 0)
    { a /= 10;
      count += 1;
    };

    printf("%d",count);
    
}