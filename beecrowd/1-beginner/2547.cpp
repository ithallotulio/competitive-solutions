#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, min, max, allowedGuests, heigth;
    while (cin >> n >> min >> max) {
        allowedGuests = 0;
        while (n--) {
            cin >> heigth;
            if (heigth >= min && heigth <= max) {
                allowedGuests++;
            }
        }
        cout << allowedGuests << endl;
    }
    return 0;
}