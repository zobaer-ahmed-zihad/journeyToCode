#include<stdio.h>
int multiplication(void){
    int a , b;
    scanf("%d %d", &a, &b);
    int mul = a * b;
    return mul;
}
int main(){
    int result = multiplication();
    printf("%d", result);

    return 0;
}