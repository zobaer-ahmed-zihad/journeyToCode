#include <bits/stdc++.h>
using namespace std;
int *ptr;
void fun(){
    // int x = 34;
    // ptr = &x;
    int *a = new int;
    *a = 40;
    ptr = a;
    cout<<"Inside fun "<<*ptr<<endl;
}

int main() {
	fun();
	cout<<"Main "<<*ptr<<endl;

}
