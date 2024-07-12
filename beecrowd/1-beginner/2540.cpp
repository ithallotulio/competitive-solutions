#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, vote, sum;
    while (cin >> n) {
        sum = 0;
        for (i=0; i < n; i++) {
            cin >> vote;
            sum += vote;
        }
        if (sum >= (n * 2/3.0)) {
            cout << "impeachment" << endl;
        } else {
            cout << "acusacao arquivada" << endl;
        }
    }
    return 0;
}
