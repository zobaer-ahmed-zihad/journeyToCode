#include <stdio.h>
#include<string.h>

int main() {
    char a[1001], b[1001], c[1001],min[1001], max[1001];
    scanf("%s %s %s", a, b, c);
    
    int num1, num2, num3;
    num1 = strcmp(a,b);
    num2 = strcmp(a,c);
    num3 = strcmp(b,c);

    if(num1 == 0 && num2 == 0 && num3 == 0){
        printf("%s\n%s", a,b);
    }
    
    if(num1 < 0 && num2 < 0){
        printf("%s\n", a);

    }else if(num1 > 0 && num3 < 0){
        printf("%s\n", b);
    }else if(num2 > 0 && num3 > 0){
        printf("%s\n", c);
    }
    
    if(num1 > 0 && num2 > 0){
        printf("%s\n", a);
    }else if(num1 < 0 && num3 > 0){
        printf("%s\n", b);
    }else if(num2 < 0 && num3 < 0){
        printf("%s\n", c);
    }
    
    return 0;
}