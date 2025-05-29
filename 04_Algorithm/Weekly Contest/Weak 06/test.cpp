#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll a, ll b) {
    ll startGroup = (a - 1) / 3 + 1;
    ll endGroup = (b - 1) / 3 + 1;

    if (startGroup == endGroup)
        return (b - a + 1) * startGroup;

    ll sum = 0;
    ll firstEnd = startGroup * 3;
    sum += (firstEnd - a + 1) * startGroup;

    ll lastStart = (endGroup - 1) * 3 + 1;
    sum += (b - lastStart + 1) * endGroup;

    if (endGroup > startGroup + 1) {
        ll cnt = endGroup - startGroup - 1;
        sum += 3 * cnt * (startGroup + 1 + endGroup - 1) / 2;
    }

    return sum;
}

int main() {

    ll n, t;
    cin >> n >> t;
    
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << solve(a, b) <<endl;
    }

    return 0;
}