#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, spacesCount, dotsPatternQty;
    char decipher;
    string code;
    while (cin >> n) {
        cin.ignore();
        while (n--) {
            getline(cin, code);
            spacesCount = 0;
            for (char c: code) {
                if (c == ' ') {
                    spacesCount++;
                }
            }
            dotsPatternQty = code.length() / (spacesCount+1);
            decipher = ('a' - 1) + (spacesCount * 3) + dotsPatternQty;
            cout << decipher << endl;
        }
    }
    return 0;
}
