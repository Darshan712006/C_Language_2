#include <stdio.h>

int main (){

    int score;

     printf(" ENTER YOUR MARK OUT OF 100:- ");
    scanf("%d",&score);

    if(score >= 85){
        printf("YOUR GRADE IS:- A, (EXCELLENT WORK)");}
    
    else if(score >= 75){
        printf("YOUR GRADE IS:- B, (WELL DONE)");}
    
    else if(score >= 65){
        printf("YOUR GRADE IS:- C, (GOOD JOB)");}
    
    else if(score >= 50){
        printf("YOUR GRADE IS:- D, (YOU PASSED, BUT COULD DO BETTER)");}
    
    else{
        printf("YOUR GRADE IS:- F, (SORRY YOU ARE FAILED)");};
    }
