#include <bits/stdc++.h>

using namespace std;

int main() {
    int lines, columns;
    cin >> lines >> columns;

    if ((lines + columns) & 1) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}
