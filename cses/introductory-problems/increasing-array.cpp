#include <bits/stdc++.h>

using namespace std;

int main() {
    int size, i, lastDiff = 0;
    long long moves = 0;
    cin >> size; 
    int array[size];

    cin >> array[0];
    for (i=1; i < size; i++) {
        cin >> array[i];
        if (array[i] < (array[i-1] + lastDiff)) {
            lastDiff = (array[i-1] + lastDiff) - array[i];
            moves += lastDiff;
        } else {
            lastDiff = 0;
        }
    }
    cout << moves << endl;
    return 0;
}
