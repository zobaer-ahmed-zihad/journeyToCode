//Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &ar[i]);

        if(ar[i] == 0){
            printf("0 ");
        }else if(ar[i] > 0){
            printf("1 ");
        }else{
            printf("2 ");
        }
    }

    return 0;
}