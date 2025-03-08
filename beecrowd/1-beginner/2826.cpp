#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a <= b) {
        cout << a << endl << b << endl;
    } else {
        cout << b << endl << a << endl;
    }
    return 0;
}