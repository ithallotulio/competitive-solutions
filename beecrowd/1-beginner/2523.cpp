#include <bits/stdc++.h>

using namespace std;

int main() {
    string cipher;
    int n, i, value;
    while (cin >> cipher >> n) {
        for (i=0; i < n; i++) {
            cin >> value;
            cout << cipher[value-1];
        }
        cout << endl;
    }
    return 0;
}