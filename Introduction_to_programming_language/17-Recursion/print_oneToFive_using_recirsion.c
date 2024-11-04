#include<stdio.h>
void recursion(int a){
    if(a > 5){
        return;
    }else{
        printf("%d\n", a);
        a++;
    }
    
    recursion(a);
}
int main(){
    printf("Recursion start\n");
    int a = 1;
    recursion(a);
    printf("Recursion End");

    return 0;
}