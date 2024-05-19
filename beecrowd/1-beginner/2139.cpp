#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, month, day, daysUntilXmas;
    int monthDays2016[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int christmasDay = 25;
    while(cin >> month >> day) {
        if (month == 12) {
            if (day == christmasDay) cout << "E natal!" << endl;
            else if (day == christmasDay - 1) cout << "E vespera de natal!" << endl;
            else if (day > christmasDay) cout << "Ja passou!" << endl;
        } else {
            daysUntilXmas = 0;
            for (i=12; i > month; i--) {
                daysUntilXmas += monthDays2016[i-1];
            }
            daysUntilXmas += christmasDay - day;
            cout << "Faltam " << daysUntilXmas << " dias para o natal!" << endl;
        }
    }
    return 0;
}