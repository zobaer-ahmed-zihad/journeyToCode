#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 5;
    for (int i = 1; i <=n; i=i+2)
    {
        star++;
        printf("%d ", star);
    }

    
    

    return 0;
}