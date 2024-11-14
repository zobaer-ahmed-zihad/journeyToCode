#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = 1, s = n - 1;
    for (int i = 1; i <=(n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if(i % 2 == 1){
                printf("#");
            }else{
                printf("-");
            }
        }
        printf("\n");
        if(i <= n - 1){
            s--;
            k = k + 2;
        }else{
            s++;
            k = k - 2;
        }
        
    }
    

    
    
    return 0;
}