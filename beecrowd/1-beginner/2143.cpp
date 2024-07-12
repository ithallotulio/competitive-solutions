#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, t, numPeople, peopleAtEnds, numOrders;
    while (cin >> t && t != 0) {
        for (i=0; i < t; i++) {
            cin >> numPeople;
            if (numPeople % 2 == 0) {
                peopleAtEnds = 2;
            } else {
                peopleAtEnds = 1;
            }
            numOrders = (numPeople * 2) - peopleAtEnds;
            cout << numOrders << endl;
        }
    }
    return 0;
}
