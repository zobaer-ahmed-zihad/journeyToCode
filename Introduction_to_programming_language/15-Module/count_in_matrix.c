#include<stdio.h>
int main(){
    int row, col, number;
    scanf("%d %d %d", &row, &col, &number);
    int a[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int search[number];
    for(int i = 0; i<number; i++){
        scanf("%d", &search[i]);
    }
    int count[1001] = {0};
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(a[i][j] == 2){
                count[2]++;
            }
            
        }
    }
    for(int i = 0; i<10; i++){
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}