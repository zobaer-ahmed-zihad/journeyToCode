#include<stdio.h>
#include<string.h>
int main(){
    char st[10000001];
    scanf("%s", &st);

    int count[26] = {0};
    int len = strlen(st);

    for(int i = 0; i<len; i++){
        count[st[i]-97]++;
    }

     for(int i = 0; i<26; i++){
        if(count[i] != 0){
            printf("%c : %d\n",i + 97, count[i] );
        }
     }
    return 0;
}