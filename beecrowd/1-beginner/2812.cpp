#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    while (cin >> m) {
        vector<int> v;
        while (m--) {
            int mi; 
            cin >> mi;
            if (mi & 1) {    
                v.push_back(mi);
            }
        }
        if (!v.empty()) {
            sort(v.begin(), v.end());
            int start = 0;
            int end = v.size() - 1;
            cout << v[end];
            end--;
            bool printStart = true;
            while (start <= end) {
                if (printStart) {
                    cout << " " << v[start];
                    start++;
                } else {
                    cout << " " << v[end];
                    end--;
                }
                printStart = !printStart;
            }
        }
        cout << endl;
        v.clear();
    }
    return 0;
}
