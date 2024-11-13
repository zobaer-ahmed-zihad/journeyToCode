#include<stdio.h>
int count_before_one(int a[], int size){
    int cnt = 0;
    for(int i = 0; i<size; i++){

        if(a[0] == 1){
            return 0;
        }
        if(a[i] !=1){
            cnt++;
        }else if(a[i] == 1){
            break;
        }
    }
    return cnt;
}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count = count_before_one(ar, n);
    printf("%d", count);

    return 0;
}