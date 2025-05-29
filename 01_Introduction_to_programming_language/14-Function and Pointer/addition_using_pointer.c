//Addition using pointer
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int *p = &a, *p2 = &b;
    int sum = *p + *p2;

    printf("%d", sum);

    return 0;
}