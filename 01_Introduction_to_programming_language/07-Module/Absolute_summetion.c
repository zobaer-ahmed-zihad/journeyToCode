//Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    
    if(sum < 0){
        long long int absolute_sum = sum * - 1;
        printf("%lld", absolute_sum);
    }else{
        printf("%lld", sum);
    }
   
    return 0;
}