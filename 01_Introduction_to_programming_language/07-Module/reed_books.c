#include<stdio.h>
int main(){
    int n;
    long long int totalTime;
    scanf("%d %lld", &n, &totalTime);
    int ar[n];
    int books = 0;
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 1; i <=n; i++)
    {
        time = time + ar[i];
        if(time <= totalTime){
            books++;
        }
    }
    printf("%d", books);
    return 0;
}