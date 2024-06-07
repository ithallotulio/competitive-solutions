#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j, v;
    int n, m;
    pair <int, int> me, target;
    while (cin >> n >> m) {
        for (i=0; i < n; i++) {
            for (j=0; j < m; j++) {
                cin >> v;
                if (v == 1) {
                    me.first = i;
                    me.second = j;
                } else if (v == 2) {
                    target.first = i;
                    target.second = j;
                }
            }
        }
        cout << abs(me.first - target.first) + abs(me.second - target.second) << endl;
    }
    return 0;
}