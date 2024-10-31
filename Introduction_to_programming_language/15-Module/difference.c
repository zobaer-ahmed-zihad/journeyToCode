#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int *x = &a, *y = &b;

    int difference = *x - *y;

    if(difference < 0){
        printf("%d", difference * -1);
    }else{
        printf("%d", difference);
    }

    return 0;
}