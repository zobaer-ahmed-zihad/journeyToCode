#include<stdio.h>
void hello(){
    printf("Hello start\n");
    printf("Hello end\n");
}
void world(){
    printf("World start\n");
    hello();
    printf("World end\n");


}
int main(){
    printf("Main Start \n");
    world();
    printf("Main End");

    return 0;
}