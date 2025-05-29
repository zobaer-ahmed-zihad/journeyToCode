#include <bits/stdc++.h>
using namespace std;
class Teacher{
    public:
        char name[50];
        int id;
        int phone;
        int age;
        
        Teacher(int id, int phone, int age){
            (*this).id = id;
            this->phone = phone;
            this->age = age;
        }
};

Teacher *fun(){
    // Teacher sakib(120, 012365, 21);
    // Teacher * sakib = &sakib;
    
    //Dynamic object
    Teacher *sakib = new Teacher(120, 013654, 24);
    return sakib;
}

int main() {
    Teacher * tea = fun();
    cout<<tea->id<<" "<<tea->phone;
}
