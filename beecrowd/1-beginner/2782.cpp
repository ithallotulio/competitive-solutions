#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, diff, stepladder = 0;
    cin >> n;
    vector<int> number(n);

    for (i=0; i < n; i++) {cin >> number[i];}

    if (n == 1) {
        stepladder = 1;
    } else {
        for (i=0; i < n-1;) {
            diff = number[i] - number[i+1];
            while (i < n-1 && number[i] - number[i+1] == diff) {
                i++;
            }
            stepladder++;
        }
    }
    cout << stepladder << endl;
    return 0;
}
