#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    int duration;
    float distance, record;
    while (cin >> n) {
        record = 0;
        for (i=0; i < n; i++) {
            cin >> duration >> distance;
            if (distance/duration > record) {
                record = distance/duration;
                cout << i+1 << endl;
            }
        }
    }
    return 0;
}