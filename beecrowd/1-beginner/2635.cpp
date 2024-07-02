#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, i;
    int matchCount;
    string largestSuggestWord;
    string word, query;
    vector<string> searched;
    bool prefixMatch;
    cin >> n;
    while (n--) {
        cin >> word;
        searched.push_back(word);
    }
    cin >> q;
    while (q--){
        cin >> query;
        matchCount = 0;
        largestSuggestWord = "";
        for (string word: searched) {
            prefixMatch = true;
            for (i=0; i < query.length(); i++) {
                if (query[i] != word[i]) {
                    prefixMatch = false;
                    break;
                }
            }
            if (prefixMatch) {
                matchCount++;
                if (word.length() > largestSuggestWord.length()) {
                    largestSuggestWord = word;
                }
            }
        }
        if (matchCount == 0) {
            cout << "-1" << endl;
        } else {
            cout << matchCount << " " << largestSuggestWord.length() << endl;
        }
    }
    return 0;
}
