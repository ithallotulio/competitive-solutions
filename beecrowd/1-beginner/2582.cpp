#include <bits/stdc++.h>

using namespace std;

int main() {
    string choices[] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    int n;
    int x, y;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        if (x+y == 0) {
            cout << choices[0] << endl;
        } else {
            cout << choices[x+y] << endl;
        }
    }
    return 0;
}
