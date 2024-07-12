#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double res;
    cin >> n;
    res = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
    printf("%.1lf\n", res);
    return 0;
}
