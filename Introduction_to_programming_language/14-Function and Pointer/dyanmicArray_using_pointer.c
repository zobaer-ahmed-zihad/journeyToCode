#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    
    for(int i = 1; i<=n; i++){
        scanf("%d", &ar[i]);
    }
    
    int *p = ar;
    
    for(int i = 1; i<=5; i++){
        printf("%d\n", *(ar + i));
    }

    return 0;
}