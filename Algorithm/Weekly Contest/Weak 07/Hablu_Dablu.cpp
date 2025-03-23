#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, health;
    cin >> n >> health;
    vector<int> ar(n);
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        totalSum = totalSum + ar[i];
    }

    sort(ar.begin(), ar.end(), greater<int>());

    while (health > 0) {
        totalSum = totalSum - ar[0];
        ar[0] = ar[0] - 1;
        health = health - ar[0];
    }

    if (ar[0] < 0 && health < 1) {
        cout << "Hablu" << endl;
    }
    else {
        if (health > 0) {
            cout << "Hablu" << endl;
        }
        else {
            cout << "Dablu" << endl;
        }
    }

    return 0;
}