#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> height;
    bool expectingPeak = false;
    int heightSize;
    int NlogonyPattern = 1;
    int n, h, i;
    cin >> n;
    heightSize = n;
    while (n--) {
        cin >> h;
        height.push_back(h);
    }
    expectingPeak = height[0] < height[1];
    for (i = 1; i < heightSize; i++) {
        if (expectingPeak) {
            if (height[i] <= height[i-1]) {
                NlogonyPattern = 0;
                break;
            }
        } else {
            if (height[i] >= height[i-1]) {
                NlogonyPattern = 0;
                break;
            }
        }
        expectingPeak = !expectingPeak;
    }
    cout << NlogonyPattern << endl;
    return 0;
}
