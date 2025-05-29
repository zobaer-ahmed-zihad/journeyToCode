#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);// Assume 5 7

    int *x = &a, *y = &b;

    int temp = *x; //temp = 5
    *x = *y; // x er memory address er value means a = 7
    *y = temp; // y er memory address er value means b = 5

    printf("%d %d", *x, *y);

    return 0;
}