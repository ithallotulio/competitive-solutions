#include <bits/stdc++.h>

using namespace std;

int a1[1000], a2[1000];
int t1[999], t2[999];
int e1, e2;
int x1, x2;
int bestTimeA1[1000], bestTimeA2[1000];

int main() {
    int i, n;
    int bestTime;
    while (cin >> n) {
        cin >> e1 >> e2;
        for (i=0; i < n; i++) cin >> a1[i];
        for (i=0; i < n; i++) cin >> a2[i];
        for (i=0; i < n-1; i++) cin >> t1[i];
        for (i=0; i < n-1; i++) cin >> t2[i];
        cin >> x1 >> x2;

        bestTimeA1[0] = e1 + a1[0];
        bestTimeA2[0] = e2 + a2[0];

        for (i=1; i < n; i++) {
            bestTimeA1[i] = min(bestTimeA1[i-1] + a1[i], bestTimeA2[i-1] + t2[i-1] + a1[i]);
            bestTimeA2[i] = min(bestTimeA2[i-1] + a2[i], bestTimeA1[i-1] + t1[i-1] + a2[i]);
        }
        bestTime = min(bestTimeA1[n-1] + x1, bestTimeA2[n-1] + x2);

        cout << bestTime << endl;
    }
    return 0;
}
