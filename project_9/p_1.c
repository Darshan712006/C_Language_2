#include <stdio.h>

int main(){
    FILE *evenfile,*oddfile;
    
    evenfile = fopen("even.txt","w");
    oddfile = fopen("odd.txt","w");

    if(evenfile == NULL || oddfile == NULL){
        printf("ERROR!");
    }

    for (int i = 50; i <= 70; i++)
    {
        if(i % 2 == 0){
            fprintf(evenfile,"%d\n",i);
        }
        else{
            fprintf(oddfile,"%d\n",i);
        }
    }
    fclose(evenfile);
    fclose(oddfile);
    
}