//https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/farmers-1
#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t;i++){
        int m1, m2, day;
        scanf("%d %d %d", &m1, &m2, &day);

        int work_complete = m1 * day;
        int total_farmers = m1 + m2;
        int new_days = work_complete / total_farmers;
        float fewer_days = day - new_days;
        
        printf("%.0f\n", fewer_days);
    }

    return 0;
}