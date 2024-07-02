#include <bits/stdc++.h>

using namespace std;

int main() {
    string newJewel;
    vector<string> uniqueJewels;
    bool isUnique;

    cin >> newJewel;
    uniqueJewels.push_back(newJewel);

    while (cin >> newJewel) {
        isUnique = true;
        for (string jewel: uniqueJewels) {
            if (newJewel == jewel){
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueJewels.push_back(newJewel);
        }
    }

    cout << uniqueJewels.size() << endl;
    return 0;
}
