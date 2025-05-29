//https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-4/problem
#include<stdio.h>
#include<string.h>
int main(){
    int n = 10001;
    char st[n];
    scanf("%s", st);
    int count[26] = {0}; 
    for (int i = 0; i < strlen(st); i++)
    {
        count[st[i] - 97]++;
    }
    
    for (int i = 0; i <26; i++)
    {
        if(count[i] != 0){
            printf("%c - %d\n",i + 97, count[i]);
        }   
    }
    
    return 0;
}