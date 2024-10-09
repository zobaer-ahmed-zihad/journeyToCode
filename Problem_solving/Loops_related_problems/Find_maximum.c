// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(max < ar[i]){
            max = ar[i];
        }
    }
    printf("%d", max);

    return 0;
}