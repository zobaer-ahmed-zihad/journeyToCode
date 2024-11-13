//https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-3/problem
#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
   
    for(int i = 0; i<t; i++){
        int n = 100001;
        char st[n];
        scanf("%s", st);
        int capital = 0, small = 0, Number = 0;
        for(int i = 0; i<strlen(st); i++){
        if(st[i] >= 'A' && st[i] <= 'Z'){
            capital++;
        }else if(st[i] >= 'a' && st[i] <= 'z'){
            small++;
        }else{
            Number++;
        }
     }
     printf("%d %d %d\n", capital, small, Number);
    }

    
    return 0;
}
