#include <bits/stdc++.h>

using namespace std;

void ignoreRemainingInputs(int nDates, int nPeople);

int main() {
    int nPeople, nDates, countGo, go, i, ignoreGo;
    bool markedDate;
    string date, bestDate, ignoreDate;
    while (cin >> nPeople >> nDates) {
        markedDate = false;
        while (nDates--) {
            cin >> date;
            countGo = 0;
            for (i=0; i < nPeople; i++) {
                cin >> go;
                if (go) {countGo++;}
            }
            if (countGo == nPeople) {
                markedDate = true;
                cout << date << endl;
                ignoreRemainingInputs(nDates, nPeople);
                break;
            }
        }
        if (!markedDate) {
            cout << "Pizza antes de FdI" << endl;
        }
    }
    return 0;
}

void ignoreRemainingInputs(int nDates, int nPeople) {
    string date;
    int i, go;
    while(nDates--) {
        cin >> date;
        for (i=0; i < nPeople; i++) {
            cin >> go;
        }
    }
}
