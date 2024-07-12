#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double min, max;
    cin >> n;
    min = n/log(n);
    max = 1.25506 * min;
    printf("%.1lf %.1lf\n", min, max);
    return 0;
}
