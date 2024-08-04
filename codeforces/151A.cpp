// Soft Drinking
// https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ml = (k * l) / nl;
    int slice = c * d;
    int salt = p / np;

    cout << min(min(ml, slice), salt) / n << endl;

    return 0;
}
