#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    int storageHome = 0;
    int storageOffice = 0;
    int buyOffice = 0;
    int buyHome = 0;
    bool carryingUmbrella = false;
    for (i = 0; i < n*2; i++) {
        string weather;
        cin >> weather;

        bool leavingHome = (i % 2) == 0 ? true : false;
        bool isRaining = weather == "chuva" ? true : false;
        if (leavingHome) {
            if (isRaining) {
                if (!carryingUmbrella) {
                    carryingUmbrella = true;
                    if (storageHome > 0) storageHome--;
                    else buyHome++;
                }
            } else {
                if (carryingUmbrella) storageHome++;
                carryingUmbrella = false;
            }
        } else { // leavingOffice
            if (isRaining) {
                if (!carryingUmbrella) {
                    carryingUmbrella = true;
                    if (storageOffice > 0) storageOffice--;
                    else buyOffice++;
                }
            } else {
                if (carryingUmbrella) storageOffice++;
                carryingUmbrella = false;
            }
        }
    }
    cout << buyHome << " " << buyOffice << endl;
    return 0;
}
