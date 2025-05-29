#include<stdio.h>
int main(){
    int a = 10;
    //pointer declear 
    int *p = &a;
    //dereference 
   // printf("%d", *p);
    *p = 27;

    printf("%d", a);
    
    return 0;
}