#include <stdio.h>
void fun(int a){
    if(a == 0) return;
    int mod = a % 10;
    fun(a / 10);
    printf("%d ", mod);
    printf("\n");
}
int main() {

    int n;
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
    int a;
    scanf("%d", &a);
    fun(a);
    }
    
    return 0;
}