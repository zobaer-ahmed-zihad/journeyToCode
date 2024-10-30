#include<stdio.h>
void subtraction(int a, int b){
    int sub = a - b;
    printf("%d", sub);
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    
    subtraction(x, y);
    return 0;
}