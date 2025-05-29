//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n];
    
    for(int i = 1; i<= n; i++){
        scanf("%d", &ar[i]);
    }
    int count[m];
    for (int i = 1; i <= m; i++)
    {
        count[i] = 0;
    }
    
    for(int i = 1; i<=n; i++){
        count[ar[i]]++;
    }
    
    for(int i = 1; i<=m; i++){
        printf("%d\n",count[i]);
    }

    return 0;
}