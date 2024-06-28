#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, i, r, g, b, graylevel;
    string conversion;
    cin >> t;
    for (i=0; i < t; i++) {
        cin >> conversion;
        cin >> r >> g >> b;
        if (conversion == "eye") {
            graylevel = (0.30 * r) + (0.59 * g) + (0.11 * b);
        } else if (conversion == "mean") {
            graylevel = (r + g + b) / 3;
        } else if (conversion == "min") {
            graylevel = min(min(r,g),b);
        } else if (conversion == "max") {
            graylevel = max(max(r,g),b);
        }
        cout << "Caso #" << i+1 << ": " << graylevel << endl;
    }
    return 0;
}
