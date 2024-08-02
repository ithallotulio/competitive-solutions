#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, hasBeans;
    for (i = 0; i < 4; i++) {
        if (cin >> hasBeans && hasBeans) {
            cout << i+1 << endl;
        }
    }
    return 0;
}
