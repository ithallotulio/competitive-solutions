#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, i;
    long long int rangel, gugu, diff, optimumDiff;
    vector<int> assignments;
    while (cin >> n) {
        gugu = 0;
        rangel = 0;
        while (n--) {
            cin >> x;
            assignments.push_back(x);
            gugu += x;
        }
        optimumDiff = gugu - rangel;
        for (i=0; i < assignments.size(); i++) {
            rangel += assignments[i];
            gugu -= assignments[i];
            diff = abs(gugu - rangel);
            if (diff < optimumDiff) {
                optimumDiff = diff;
            } else {
                break;
            }
        }
        cout << optimumDiff << endl;
        assignments.clear();
    }
    return 0;
}
