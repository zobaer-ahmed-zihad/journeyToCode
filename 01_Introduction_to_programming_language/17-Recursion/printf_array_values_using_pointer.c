#include<stdio.h>
void recursion(int ar[],int n, int i){
    if(n == i) return;
    
    printf("%d\n", ar[i]);
    recursion(ar, n, i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int i = 0;
    recursion(ar, n, i);

    return 0;
}