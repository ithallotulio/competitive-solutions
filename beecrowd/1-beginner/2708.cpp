#include <bits/stdc++.h>

using namespace std;

int main() {
    int touristsNeedReturn = 0;
    int jeepsNeedReturn = 0;
    int tourists;
    string jeep;
    while (cin >> jeep) {
        if (jeep == "ABEND") {
            break;
        }
        cin >> tourists;
        if (jeep == "SALIDA") {
            touristsNeedReturn += tourists;
            jeepsNeedReturn++;
        } else if (jeep == "VUELTA") {
            touristsNeedReturn -= tourists;
            jeepsNeedReturn--;
        }
    }
    cout << touristsNeedReturn << endl;
    cout << jeepsNeedReturn << endl;
    return 0;
}
