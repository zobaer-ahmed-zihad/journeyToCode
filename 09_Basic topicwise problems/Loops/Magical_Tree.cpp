#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int s = n + 4, k = 1;
	for(int i = 1; i<= (n/2 + 6); i ++){
	    for(int j = 1; j<=s; j++){
	        cout<<" ";        
	    }
	    for(int j = 1; j<=k; j++){
	        cout<<"*";
	    }
	    cout<<endl;
	    s--;
	    k = k + 2;
	}
	
	for(int i = 1; i<=5; i++){
	    for(int j = 1; j<=5; j++){
	        cout<<" ";
	    }
	    for(int j = 1; j<=n; j++){
	        cout<<"*";
	    }
	    cout<<endl;
	}

}
