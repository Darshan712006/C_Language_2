#include <stdio.h>

int main(){

    char i = 'a';
    
    do
    {
    printf("%c",i);
    i += 4;
    printf("  ");
    } while (i <= 'z');
    
}