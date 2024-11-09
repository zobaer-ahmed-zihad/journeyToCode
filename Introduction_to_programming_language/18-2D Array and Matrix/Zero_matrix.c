//check a matrix is zero/Null matrix or not
#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int elements = row * col;
    int count = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(a[i][j] == 0){
                count++;
            }
        }
    }

    if(count == elements)
    {
        printf("Zero Or Null matrix");
    }else{
        printf("Not null matrix");
    }



    return 0;
}