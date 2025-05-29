// No return type and No parameter
#include<stdio.h>
void addition(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
}

int main(){
    addition();
    return 0;
}