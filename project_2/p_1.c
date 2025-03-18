#include <stdio.h>

int main(){

    int score;
    char grade;

    printf(" ENTER YOUR MARK OUT OF 100:- ");
    scanf("%d",&score);

    if(score >= 90){
        printf("YOUR GRADE IS:- A");}
    
    else if(score >= 80){
        printf("YOUR GRADE IS:- B");}
    
    else if(score >= 70){
        printf("YOUR GRADE IS:- C");}
    
    else if(score >= 60){
        printf("YOUR GRADE IS:- D");}
    
    else if(score >= 50){
        printf("YOUR GRADE IS:- E");}
    
    else{
        printf("YOUR GRADE IS:- F");};
    }
    