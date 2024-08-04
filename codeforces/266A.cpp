// Stones on the Table
// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string color;
    cin >> color;
    
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        if (color[i] == color[i+1]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
