//https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/update-and-print/problem
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int position, value;
    scanf("%d %d", &position, &value);

    for (int i = 0; i < n; i++)
    {
        ar[position] = value;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    

    return 0;
}