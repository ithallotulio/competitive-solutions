#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, i;
    cin >> n >> k;
    int p[n];
    for (i=0; i < n; i++) {
        cin >> p[i];
    }
    sort(p, p+n);
    cout << p[n-k] << endl;
    return 0;
}
