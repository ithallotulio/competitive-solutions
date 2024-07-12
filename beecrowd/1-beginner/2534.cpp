#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> values;
    int n, q, v, pos;
    while (cin >> n >> q) {
        while (n--) {
            cin >> v;
            values.push_back(v);
        }
        sort(values.begin(), values.end());
        while (q--) {
            cin >> pos;
            cout << values[values.size() - pos] << endl;
        }
        values.clear();
    }
    return 0;
}
