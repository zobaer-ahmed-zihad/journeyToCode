#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d ",&a[i][j]);
        }
    }
    // Exact row printing
    // int exactRow;
    // scanf("%d", &exactRow);
    // for(int i = 0; i<col; i++){
    //     printf("%d ", a[exactRow][i]);
    // }

    //Exact colum printing
    int exactColum; 
    scanf("%d ", &exactColum);
    for(int i = 0; i<row;i++){
        printf("%d ", a[i][exactColum]);
    }


    return 0;
}