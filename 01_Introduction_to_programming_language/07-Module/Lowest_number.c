//Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];

    int lowest = INT_MAX, position = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &ar[i]);

        if(ar[i] < lowest){
            lowest = ar[i];
            position = i;
        }
    }
    printf("%d %d", lowest, position + 1);
    
    return 0;
}