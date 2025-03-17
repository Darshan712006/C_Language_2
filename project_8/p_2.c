#include <stdio.h>

void findcube(int num){
    printf("%d",num*num*num);
}

int main(){
    int a;

    printf("ENTER SIZE OF ARRAY \n");
    scanf("%d",&a);

    int array[a][a];

    printf("ENTER ARRAY ELEMENT \n");

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("CUBES OF ALL ELEMENT \n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            findcube(array[i][j]);
            printf("\n");
        }
    }
}