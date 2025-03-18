#include <stdio.h>

int main(){
    int a,f,l,s;

    printf("ENTER THE TOTAL DIGITS:- ");
    scanf("%d",&a);

    l = a %10;

    f = a;

    while (f > 10)
    {
        f /= 10;
    }

    s = f + l;

    printf("%d",s);
    
}