#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int english;
    int math;

    Student(string name, int roll, int english, int math){
        this->name = name;
        this->roll = roll;
        this->english = english;
        this->math = math;
    }
    void totalMarks(){
        cout<<"Total marks of "<<name<<" = "<<english + math<<endl;
    }
};
int main(){
   Student zihad("Zobaer Ahmed Zihad", 101, 93, 82);
   zihad.totalMarks();
   Student salman("Taskin ahmed", 001, 99, 73);
   salman.totalMarks();
   return 0;
}