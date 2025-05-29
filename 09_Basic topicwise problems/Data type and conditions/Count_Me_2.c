//https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-2-2
#include<stdio.h>
#include<string.h>
int main(){
    int n = 100001;
    char st[n];
    scanf("%s", st);
    
    int count = 0;
    for (int i = 0; i < strlen(st); i++)
    {
        if(st[i] != 'a' && st[i] != 'e'&&st[i] != 'i'&&st[i] != 'o'&&st[i] != 'u'){
            count++;
        }
        
    }
   printf("%d", count);
    
    return 0;
}