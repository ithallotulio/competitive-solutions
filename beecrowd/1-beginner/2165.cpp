#include <bits/stdc++.h>

using namespace std;

int main() {
    string text;
    getline(cin, text);
    if (text.length() <= 140) {
        cout << "TWEET" << endl;
    } else {
        cout << "MUTE" << endl;
    }
    return 0;
}