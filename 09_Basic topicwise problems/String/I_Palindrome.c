#include <stdio.h>
#include<string.h>
int main() {
  char st[1001];
  scanf("%s", st);
  int len = strlen(st);
  int flag = 0;
  int i = 0, j=len-1;
  while(i<j){
      if(st[i] == st[j]){
          i++;
          j--;
      }else{
          flag = 1;
          break;
      }
  }
   if(flag == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}