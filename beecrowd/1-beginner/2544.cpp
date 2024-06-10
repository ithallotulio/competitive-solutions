#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, techniqueUses;
    while (cin >> n) {
        techniqueUses = 0;
        while (n > 1) {
            n /= 2;
            techniqueUses++;
        }
        cout << techniqueUses << endl;
    }
    return 0;
}