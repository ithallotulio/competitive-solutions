#include <bits/stdc++.h>

using namespace std;

int64_t binomial(int64_t p, int k);
int fatorial (int n);

int main() {
    int points;
    cin >> points;
    cout << 1 + binomial(points, 2) + binomial(points, 4) << endl;
    return 0;
}

int64_t binomial(int64_t p, int k) {
    if (k > p) return 0;
    if (k == 0 ||k == p) return 1;
    int diff = abs(p - k);
    int simplify = max(diff, k);
    for (int i = p-1; i > simplify; i--) {
        p *= i;
    }
    return p / fatorial(min(diff, k));
}

int fatorial (int n) {
    int fatorial = 1;
    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}
