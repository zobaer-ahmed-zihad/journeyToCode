#include <stdio.h>
int main() {
   int n;
   scanf("%d", &n);
   int a[n], b[n];

   for (int i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] <= a[j]){
                b[i] = a[i];
            }else{
                b[j] = a[j];
            }
        }
        
    }
    
   for (int i = 0; i < n; i++)
   {
    printf("%d ", b[i]);
   }
   

    return 0;
}