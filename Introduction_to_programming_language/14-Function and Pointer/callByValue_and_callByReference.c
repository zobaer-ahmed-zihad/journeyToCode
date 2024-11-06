#include <stdio.h>
void fun(int a, int *b){
    a = a + 100;
    *b = *b + 100;
    printf("Inside Fun funtion : %d %d\n", a , *b);
}
int main() {
    int a = 10, b = 20;
    
    fun(a, &b);
    printf("Inside main fun : %d %d\n", a , b);

    return 0;
}