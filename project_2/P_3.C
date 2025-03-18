#include <STDIO.H>

int main()
{
    int score;
    char grade;

    printf(" ENTER YOUR SCORE OOUT OF 10O:- ");
    scanf("%d",&score);

    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }

    else if (score >= 70)
    {
        grade = 'C';
    }

    else if (score >= 60)
    {
        grade = 'D';
    }

    else
    {
        grade = 'F';
    };

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("Congratulation! you are eligible for the next level");
    }
    else
    {
        printf("Please Try again next time");
    };
};
