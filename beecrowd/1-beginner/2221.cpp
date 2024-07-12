#include <bits/stdc++.h>

using namespace std;

int getValue(int atk, int def, int lvl, int bonus);

int main() {
    int dabriel, guarte;
    int atk, def, lvl;
    int bonus;
    int n;
    cin >> n;
    while (n--) {
        cin >> bonus;
        cin >> atk >> def >> lvl;
        dabriel = getValue(atk, def, lvl, bonus);
        cin >> atk >> def >> lvl;
        guarte = getValue(atk, def, lvl, bonus);
        if (dabriel > guarte) {
            cout << "Dabriel" << endl;
        } else if (guarte > dabriel) {
            cout << "Guarte" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }
    return 0;
}

int getValue(int atk, int def, int lvl, int bonus) {
    int value = (atk + def) / 2;
    if (lvl % 2 == 0) value += bonus;
    return value;
}
