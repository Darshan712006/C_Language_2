#include <stdio.h>
int main(){
int choice,num1,num2,result;

while (1)
{
    printf("1 is addition (+)\n");
    printf("2 is subtraction (-) \n");
    printf("3 is multipilcation (*) \n");
    printf("4 is division\n");
    printf("5 is modulo (%%) \n");
    printf("0 is exit \n");
    printf("ENTER YOUR CHOICE:- ");
    scanf("%d",&choice);
    
    if (choice == 0){
        printf("Exiting program...\n");
        break;
}
    
    printf("ENTER THE FIRST NUMBER:-");
    scanf("%d",&num1);
    printf("ENTER THE SECOND NUMBER:-");
    scanf("%d",&num2);

    if (choice == 1)
    {
    result = num1+num2;
    printf("Additom is %d \n",result);
    }
    
    else if (choice == 2)
    {
    result = num1-num2;
    printf("Subtraction %d \n",result);
    }
    
    else if (choice == 3)
    {
    result = num1*num2;
    printf("multiplication is %d \n",result);
    }
    else if (choice == 4)
    {
        if(num2 != 0); 
    result = num1/num2;
    printf("Devision is  %d \n",result);
    }
    else if (choice == 5)
    {
        if(num2 != 0);
    result = num1%num2;
    printf("modulo is %d \n",result);
    }
    else
    {
        printf("your choice is not vaild...");
    }
    
}
    
}