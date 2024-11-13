//https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/matrix-38/problem
#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // last row 
    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[row-1][i]);
    }
    // last colum
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][col-1]);
    }

    return 0;
}