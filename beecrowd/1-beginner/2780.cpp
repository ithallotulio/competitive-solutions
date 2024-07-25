#include <bits/stdc++.h>

using namespace std;

int main() {
    int distance, score;
    cin >> distance;
    if (distance <= 800) {
        score = 1;
    } else if (distance <= 1400) {
        score = 2;
    } else {
        score = 3;
    }
    cout << score << endl;
    return 0;
}
