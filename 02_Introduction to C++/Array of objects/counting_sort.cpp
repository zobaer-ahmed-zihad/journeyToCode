#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int cnt[26] = {0};
   for(int i = 0; i<n; i++){
     char ch;
     cin>>ch;
     cnt[ch - 'a']++;
   }
    for(char i = 'a'; i<= 'z'; i++){
        if(cnt[i - 'a'] > 0){
            for(int j = 0; j<cnt[i-'a']; j++){
                cout<<i;
            }
        }
    }

   return 0;
}