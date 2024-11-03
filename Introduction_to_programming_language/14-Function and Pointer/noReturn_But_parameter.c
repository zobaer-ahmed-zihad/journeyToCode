#include<stdio.h>
void subtraction(int a, int b){
    int sub = a - b;
    printf("%d", sub);
}
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    subtraction(num1, num2);
    return 0;
}