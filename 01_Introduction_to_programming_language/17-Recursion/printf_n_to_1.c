#include<stdio.h>
void recursion(int a){
    if(a == 0) return;
    
    printf("%d\n", a);
    a--;
    
    recursion(a);
}
int main(){
    printf("Recursion start\n");
    int a;
    scanf("%d", &a);
    recursion(a);
    printf("Recursion End");

    return 0;
}