#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<int, int>> num;
    vector<int> res;
    vector<string> peopleWrongSymbol;
    string expression, name, playerinfo;
    int a, b, c, i, t, pos;
    char ignore, symbol;
    bool correct;
    while (cin >> t) {
        cin.ignore();
        for (i=0; i < t; i++) {
            getline(cin, expression);
            while (expression.empty()) {
                getline(cin, expression);
            }
            istringstream iss(expression);
            iss >> a >> b >> ignore >> c;
            num.push_back(make_pair(a,b));
            res.push_back(c);
        }
        for (i=0; i < t; i++) {
            getline(cin, playerinfo);
            while (playerinfo.empty()) {
                getline(cin, playerinfo);
            }
            istringstream iss(playerinfo);
            iss >> name >> pos >> symbol;
            pos--;
            a = num[pos].first;
            b = num[pos].second;
            c = res[pos];
            switch (symbol) {
                case '+':
                    correct = (a + b == c);
                    break;
                case '-':
                    correct = (a - b == c);
                    break;
                case '*':
                    correct = (a * b == c);
                    break;
                case 'I':
                    correct = !(a * b == c || a + b == c || a - b == c);
                    break;
            }
            if (!correct) {
                peopleWrongSymbol.push_back(name);
            }
        }
        if (peopleWrongSymbol.empty()) {
            cout << "You Shall All Pass!" << endl;
        } else if (peopleWrongSymbol.size() == t) {
            cout << "None Shall Pass!" << endl;
        } else {
            sort(peopleWrongSymbol.begin(), peopleWrongSymbol.end());
            for (i=0; i < peopleWrongSymbol.size()-1; i++) {
                cout << peopleWrongSymbol[i] << " ";
            }
            cout << peopleWrongSymbol[i] << endl;
        }
        peopleWrongSymbol.clear();
        num.clear();
        res.clear();
    }
    return 0;
}
