#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n, i, j;
    string text, word, cipher;
    while (cin >> c >> n) {
        cin.ignore();
        getline(cin, word);
        getline(cin, cipher);
        while (n--) {
            getline(cin, text);
            for (i=0; i < text.length(); i++) {
                for (j=0; j < cipher.length(); j++) {
                    if (text[i] == tolower(cipher[j])) {
                        text[i] = tolower(word[j]);
                    } else if (text[i] == tolower(word[j])) {
                        text[i] = tolower(cipher[j]);
                    } else if (text[i] == cipher[j]) {
                        text[i] = word[j];
                    } else if (text[i] == word[j]) {
                        text[i] = cipher[j];
                    }
                }
            }
            cout << text << endl;
        }
        cout << endl;
    }
    return 0;
}