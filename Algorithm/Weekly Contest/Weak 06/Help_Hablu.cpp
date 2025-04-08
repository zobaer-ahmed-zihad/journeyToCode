#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s, t;
    cin >> s >> t;

    int dp1 = 0, dp2 = 0, dp3 = 0;

    for (char c : s) {
        if (c == t[2]) dp3 += dp2; 
        if (c == t[1]) dp2 += dp1; 
        if (c == t[0]) dp1++;      
    }

    cout << dp3 << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
