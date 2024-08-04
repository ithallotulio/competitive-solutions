// Nearly Lucky Number
// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int i;
    long long n;
    cin >> n;

    int count = 0;
    while (n > 0) {
        int num = n % 10;
        if (num == 4 || num == 7) {
            count++;
        }
        n /= 10;
    }
    if (count == 0) { cout << "NO"; return 0;};

    while (count > 0) {
        int num = count % 10;
        if (count != 4 && count != 7) {
            cout << "NO" << endl;
            return 0;
        }
        count /= 10;
    }
    cout << "YES" << endl;
    return 0;
}

/* 2nd solution

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    string sn = to_string(n);
    int count = 0;
    for (char c: sn) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    if (count == 0) {cout << "NO"; return 0;};

    string scount = to_string(count);
    for (char c: scount) {
        if (c != '4' || c != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
*/