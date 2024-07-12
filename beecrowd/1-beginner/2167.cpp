#include <bits/stdc++.h>

using namespace std;

int main() {
    bool speedFall;
    int n, i, rpm, lastRpm;
    cin >> n;
    cin >> rpm;
    for (i=1; i < n; i++) {
        lastRpm = rpm;
        cin >> rpm;
        speedFall = rpm < lastRpm;
        if (speedFall) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
