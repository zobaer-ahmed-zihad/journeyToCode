//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
#include <stdio.h>
void add(int a, int b){
    int sum = a + b;
    printf("%d", sum);
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    add(x, y);

    return 0;
}