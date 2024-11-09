#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr = &n;
    scanf("%d", ptr);

    int *ar;
    ar = (int *)calloc(1, sizeof(int));
    ar = (int *)realloc(ar, 1 + (n-1) * sizeof(int));
    if(ar == NULL){

    }

    for (int i = 0; i <n; i++)
    {
        scanf("%d", ar + i);
    }
    
    for (int i = 0; i <n; i++)
    {
        printf("%d ", *(ar + i));
    }
    free(ar);
    
    return 0;
}