#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int count[100001]={0};
    for(int i = 0; i<n; i++){
        count[ar[i]]++;
    }
    int cnt = 0;
    for(int i = 0; i<100001; i++){
        if(count[i] == 1){
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}