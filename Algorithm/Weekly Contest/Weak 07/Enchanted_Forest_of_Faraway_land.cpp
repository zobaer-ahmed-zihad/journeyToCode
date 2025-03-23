#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> freq(10005);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                count++;
            }
        }
        if (count > k) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }

    }
    return 0;
}