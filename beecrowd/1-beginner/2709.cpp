#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n);

int main() {
    int coinsQty, value, step;
    int i, sum;
    vector<int> coins;
    while (cin >> coinsQty) {
        while (coinsQty--) {
            cin >> value;
            coins.push_back(value);
        }
        cin >> step;
        sum = 0;
        for (i=coins.size()-1; i >= 0; i-=step) {
            sum += coins[i];
        }
        if (isPrime(sum)) {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        } else {
            cout << "Bad boy! I’ll hit you." << endl;
        }
        coins.clear();
    }
    return 0;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i=3; i*i <= n; i+=2) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}
