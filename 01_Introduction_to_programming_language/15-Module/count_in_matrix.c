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
            for(int m = 0; m<number; m++){
                if(a[i][j] == search[m]){
                    count[search[m]]++;
                }
            }
            
        }
    }
    for(int i = 0; i<number; i++){
        printf("%d\n", count[search[i]]);
    }

    return 0;
}