#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n, number, missingNumber;
    long long totalSum;
    cin >> n;
    totalSum = (long long)n * (n + 1) / 2;
    for (i=0; i < n-1; i++) {
        cin >> number;
        totalSum -= number;
    }
    missingNumber = totalSum;
    cout << missingNumber << endl;
    return 0;
}
