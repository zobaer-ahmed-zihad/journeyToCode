#include<stdio.h>
int addition(int a, int b){
    int sum = a + b;
    return sum;
}

//Seconde way
//int addition(int a, int b);
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result = addition(num1, num2);
    printf("%d", result);

    return 0;
}
//Second way

// int addition(int a, int b){
//     int sum = a + b;
//     return sum;
// }