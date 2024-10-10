// problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    long long int find;
    scanf("%lld", &find);
    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if(ar[i] == find){
            result = i;
            break;
        }
        
    }
    if(result != -1){
        printf("%d", result);
    }else{
        printf("-1");
    }
    return 0;
}