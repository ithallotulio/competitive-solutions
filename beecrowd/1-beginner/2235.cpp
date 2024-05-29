#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    int sum, maxValue;
    cin >> a >> b >> c;
    sum = a + b + c;
    maxValue = max(max(a,b),c);
    if (a == b || a == c || b == c) {
        cout << "S" << endl;
    } else if (sum - maxValue == sum / 2.0) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}