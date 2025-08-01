#include <bits/stdc++.h>
using namespace std;

void solveTestCase() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int finalCnt = 0;
    int i = 0;
    while (i <= n - k) {
        bool flag  = true;
        for (int j = i; j < i + k; j++) {
            if (v[j] != 0) {
                flag  = false;
                break;
            }
        }
        if (flag) {
            finalCnt++;
            i += k;
            i++;    
        } else {
            i++;
        }
    }
    cout << finalCnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solveTestCase();
    }
    return 0;
}