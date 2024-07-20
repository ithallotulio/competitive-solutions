#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, m;
    int xi, yi;
    while (cin >> x >> y >> m) {
        while (m--) {
            cin >> xi >> yi;
            if (max(xi, yi) <= max(x, y) && min(xi,yi) <= min(x, y)) {
                cout << "Sim" << endl;
            } else {
                cout << "Nao" << endl;
            }
        }
    }
    return 0;
}
