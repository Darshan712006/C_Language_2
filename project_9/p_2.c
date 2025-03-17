#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    int chemistry, maths, physics;
    float percentage;

};

int main(){
    struct student students[5];

    for (int i = 0; i < 5; i++){
        printf("ENTER DETAILS OF STUDENT %d \n", i + 1);

        printf("ROLL NO. ");
        scanf("%d",&students[i].roll_no);

        printf("NAME");
        scanf("%C",&students[i].name);
       
        printf("CHEMISTRY");
        scanf("%d",&students[i].chemistry);
        
        printf("MATHEMATICS");
        scanf("%d",&students[i].maths);
        
        printf("PHYSICS");
        scanf("%d",&students[i].physics);

        students[i].percentage =
         (students[i].chemistry + students[i].maths + students[i].physics) / 3.0;
    }

    printf("\n marksheet:- \n");
    for(int i = 0; i < 5; i++){
        printf("student %d: \n", i+1);

        printf("ROLL NO. %d \n",&students[i].roll_no);
        
        printf("NAME %s \n",&students[i].name);
        
        printf("CHEMISTRY %d \n",&students[i].chemistry);
        
        printf("MATHAMATICS %d \n",&students[i].maths);
        
        printf("PHYSICS %d \n",&students[i].physics);
        
        printf("PERCENTAGE %.2f%% \n",&students[i].percentage);

    }
}
