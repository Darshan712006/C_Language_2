#include <stdio.h>

int main(){
    int salary;
    int hra;
    int da;
    int ta;

    printf("ENTER THE SALARY");
    scanf(" %d",&salary);

    printf(" ENTER THE HRA ");
    scanf(" %d",&hra);

    printf("  ENTER THE DA");
    scanf(" %d",&da);

    printf("ENTER THE TA");
    scanf(" %d",&ta);

    int a = salary +(salary*hra/100) + (salary*da/100) + (salary*ta/100);
    printf("the gross salary is : %d",a); 

}
 