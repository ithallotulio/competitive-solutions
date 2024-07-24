#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long int y, x, mainDiagonal, mx, ans;
    cin >> t;
    while (t--) {
        cin >> y >> x;
        mx = max(y, x);
        mainDiagonal = ((mx * mx) - mx + 1);
        if (mx % 2 == 0) {
            ans = mainDiagonal + y - x;
        } else {
            ans = mainDiagonal + x - y;
        }
        cout << ans << endl;
    }
    return 0;
}
