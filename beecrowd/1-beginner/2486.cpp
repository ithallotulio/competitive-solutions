#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, qty, vitamin;
    string food;
    map<string, int> foodVitamin = {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34}
    };
    while (cin >> n && n != 0) {
        vitamin = 0;
        for (i = 0; i < n; i++) {
            cin >> qty;
            cin.ignore();
            getline(cin, food);
            vitamin += foodVitamin[food] * qty;
        }
        if (vitamin < 110) {
            cout << "Mais ";
            vitamin = 110 - vitamin;
        } else if (vitamin > 130) {
            cout << "Menos ";
            vitamin -= 130;
        }
        cout << vitamin << " mg" << endl;
    }
    return 0;
}
