//https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/shopping-13
#include <stdio.h>
int main() {
   long long int money;
   scanf("%lld", &money);
   
   if(money > 1000){
       printf("I will buy Punjabi\n");
       
       if(money - 1000 >= 500){
           printf("I will buy new shoes\nAlisa will buy new shoes");
       }
   }else{
       printf("Bad luck!");
   }

    return 0;
}