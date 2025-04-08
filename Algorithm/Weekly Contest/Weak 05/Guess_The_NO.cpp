#include <bits/stdc++.h>

using namespace std;
bool knapsack(int t) {
    if (t < 0) return false;  
    
    vector<bool> dp(t + 1, false);
    dp[0] = true;  

    for (int i = 0; i <= t; i++) {
        if (dp[i]) {  
            if (i + 3 <= t) dp[i + 3] = true; 
            if (i + 4 <= t) dp[i + 4] = true;  
        }
    }
    return dp[t];
}

int main() {
    long long int t;
    cin >> t;

    (knapsack(t)) ? cout << "YES" : cout << "NO";

    return 0;
}

