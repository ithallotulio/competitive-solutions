#include <bits/stdc++.h>

using namespace std;

int main() {
    string substr, str;
    int lastSubstrStartIndex, substrCount;
    int i, j, caseNum=0;
    while (cin >> substr >> str) {
        caseNum++;
        substrCount = 0;
        for (i=0; i < str.length(); i++) {
            for (j = 0; (substr[j] == str[i+j]) && (j < substr.length()); j++){}
            if (j == substr.length()) {
                lastSubstrStartIndex = i;
                substrCount++;
            }
        }
        cout << "Caso #" << caseNum << ":" << endl;
        if (substrCount > 0){ 
            cout << "Qtd.Subsequencias: " << substrCount << endl;
            cout << "Pos: " << lastSubstrStartIndex + 1 << endl;
        } else {
            cout << "Nao existe subsequencia" << endl;
        }
        cout << endl;
    }
    return 0;
}
