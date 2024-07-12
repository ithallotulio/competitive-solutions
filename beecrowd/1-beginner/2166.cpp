#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    double res = 2;
    cin >> n;
    for (i = 1; i < n; i++) {
        res = 2 + (1.0/res);
    }
    if (n == 0) {
        res = 1;
    } else {
        res = 1 + (1.0/res);
    }
    printf ("%.10lf\n", res);
    return 0;
}
