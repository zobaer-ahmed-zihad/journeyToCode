#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[50];
    int roll; 
    int cls;
    char section;

    //Constructor
    Student(char *nm, int r, int c, char s){
       strcpy(name, nm);
        roll = r;
        cls = c;
        section = s;
    }
};
int main(){
//    Student rahim("Rahim uddin", 101, 7, 'E'); // static way
    char name[100] = "Rahim uddin";
    Student *rahim = new Student(name, 101, 6, 'E'); // dynamic object
    // cout<<(*rahim).name;
    cout<<rahim->roll; // Dynamic object access


   return 0;
}