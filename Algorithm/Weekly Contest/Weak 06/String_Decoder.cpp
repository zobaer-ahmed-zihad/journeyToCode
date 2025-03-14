#include <iostream>
#include <string>
using namespace std;

void decodeString(const string& S) {
    pair<int, char> result;
    int n = S.size();

    for (int i = 0; i < n; i = i + 2) {
        char ch = S[i];        // Character
        int count = S[i + 1] - '0';  // Convert digit char to integer
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string st;
        cin >> st;
        decodeString(st);
    }

    return 0;
}
