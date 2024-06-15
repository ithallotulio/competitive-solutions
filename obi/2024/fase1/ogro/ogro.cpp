#include <bits/stdc++.h>

using namespace std;

int main() {
    int d, e, res;
    cin >> e >> d;
    if (e > d) {
        res = e + d;
    } else {
        res = 2 * (d - e);
    }
    cout << res << endl;
    return 0;
}
