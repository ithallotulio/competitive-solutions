#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int p;
    while (cin >> p && p != -1) {
        if (p == 0) {
            cout << 0 << endl;
        } else {
            cout << p - 1 << endl;
        }
    }
    return 0;
}
