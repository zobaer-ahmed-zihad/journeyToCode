#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    scanf("%d %d",&a, &b);
    int *ptr1 = &a, *ptr2 = &b;
    
    swap(ptr1, ptr2);
    printf("After swaping : %d %d", a, b);
    return 0;
}