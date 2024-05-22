#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;
    long double res = 6;
    cin >> n;
    for (i = 1; i < n; i++) {
        res = 6 + 1.0 / res;
    }
    if (n == 0) res = 3;
    else res = 3 + 1.0 / res;
    printf("%.10Lf\n", res);
    return 0;
}