//Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
#include <stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b; 
    b = temp;
    printf("%d %d", a, b);
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(x, y);

    return 0;
}