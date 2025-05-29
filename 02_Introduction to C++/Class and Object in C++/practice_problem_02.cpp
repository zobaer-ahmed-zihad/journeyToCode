//https://docs.google.com/document/d/1myhhYc5mXuI0G6jAMWp3yk4N0WO8aLse/edit
#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    int jersey_no;
    char country[50];
};
int main(){
   Cricketer *dhoni = new Cricketer;
   char cty[50] = "india";
   strcpy(dhoni->country, cty);
   dhoni->jersey_no = 07;
   Cricketer *kohli = new Cricketer;

   *kohli = *dhoni;
    delete dhoni;

   cout<<kohli->country<<" "<<kohli->jersey_no<<endl;
   cout<<dhoni->country<<" "<<dhoni->jersey_no<<endl; // Garbage value

   return 0;
}