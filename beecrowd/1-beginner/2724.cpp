#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, u;
    string formula;
    vector<string> dangerous;
    bool substrFounded, isDangerous;
    size_t pos;
    cin >> n;
    while (n--) {
        cin >> t;
        while (t--) {
            cin >> formula;
            dangerous.push_back(formula);
        }
        cin >> u;
        while (u--) {
            cin >> formula;
            isDangerous = false;
            for (string danger: dangerous) {
                pos = formula.find(danger);
                substrFounded = (pos != string::npos);
                if (substrFounded) {
                    pos += danger.length();
                    if (pos < formula.length() && (isdigit(formula[pos]) || islower(formula[pos]))) {
                        continue;
                    } else {
                        isDangerous = true;
                        break;
                    }
                }
            }
            if (isDangerous) {
                cout << "Abortar" << endl;
            } else {
                cout << "Prossiga" << endl;
            }
        }
        dangerous.clear();
        if (n > 0) {
            cout << endl;
        }
    }
    return 0;
}
