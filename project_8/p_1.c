#include <stdio.h>

int stringlength(char *str){
    int length = 0;
    while(*str != '\0'){
        length++;
        str++;
    }
    return length;
    
}
int main()
{

    char str[100];

    printf("ENTER YOUR STRING \n");
    scanf("%s", str);

    printf("LENGTH OF STRING IS %d \n",stringlength(str));
}
 

