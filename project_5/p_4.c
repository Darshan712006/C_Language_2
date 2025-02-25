#include <stdio.h>

int main(){
    int a [3][3];

    a [0][0] = 2;
    a [0][1] = 7;
    a [0][2] = 1;
    a [1][0] = 3;
    a [1][1] = 5;
    a [1][2] = 4;
    a [2][0] = 8;
    a [2][1] = 9;
    a [2][2] = 6;

    int row,col;
    int r = 0, c = 0;

    printf("ENTER THE ROW NUMBER:- ");
    scanf("%d", &row);

    if(row < 0 || row >= 3){
        printf("\n");
    }

    printf("ELEMENT OF ROW:- %d", row);
    for(int j = 0; j < 3; j++){
        printf("%d ",a[row][j]);
        r += a[row][j];
    }
    printf("THE SUM OF ROW %d:%d",row,col);

    
    printf("ENTER THE COL NUMBER:- ");
    scanf("%d", &col);

    if(col < 0 || col >= 3){
        printf("\n");
    }

    printf("ELEMENT OF COL:- %d", col);
    for(int i = 0; i < 3; i++){
        printf("%d ",a[col][i]);
        c += a[col][i];
    }
    printf("THE SUM OF ROW %d:%d",col,c);

}