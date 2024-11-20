#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main(){
   Student rahim;
   rahim.roll = 101;
   rahim.section = 'E';
   rahim.cls = 7;
   char nm1[50] = "Rahim uddin";
   strcpy(rahim.name, nm1);

   Student karim;
   karim.roll = 102;
   karim.section = 'F';
   karim.cls = 9;
   char nm2[50] = "Karim solimullah";
   strcpy(karim.name, nm2);

   cout<<rahim.name<<" "<<rahim.cls<<endl;
   cout<<karim.name<<" "<<karim.section<<endl; 

   return 0;
}