#include <stdio.h>

int main(){
    float a,b,c;

    printf("ENTER THE MATHS MARK (OUT OF 100): ");
    scanf("%f",&a);

    printf("ENTER THE ENGLISH MARK (OUT OF 100): ");
    scanf("%f",&b);

    printf("ENTER THE SCIENCE MARK (OUT OF 100): ");
    scanf("%f",&c);

    float avg_mark = (a + b + c) /3;
    printf("EVERAGE MARK IS:- %.2f",avg_mark);

}
