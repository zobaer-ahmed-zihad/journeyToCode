#include<stdio.h>
int lenthCalculation(char a[], int i){
    if(a[i] == '\0') return 0;
    int len = lenthCalculation(a, i + 1);
    return len + 1;
}
int main(){
    char st[1000];
    scanf("%s", st);
    int i = 0;
    int length = lenthCalculation(st, i);
    printf("%d", length);

    return 0;
}