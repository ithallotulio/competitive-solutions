#include <bits/stdc++.h>

using namespace std;

int main() {
    int multiplier;
    long long int exp;
    while ((cin >> multiplier >> exp) && (multiplier != 0 || exp != 0)) {
        cout << multiplier * exp << endl;
    }
    return 0;
}