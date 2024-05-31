#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char res;
    cin >> n;
    if (n < 0 || n > 100) {
        cerr << "Invalid Input" << endl;
        return 0;
    } else if (n == 0 ) {
        res = 'E';
    } else if (n <= 35) {
        res = 'D';
    } else if (n <= 60) {
        res = 'C';
    } else if (n <= 85) {
        res = 'B';
    } else {
        res = 'A';
    }
    cout << res << endl;
    return 0;
}