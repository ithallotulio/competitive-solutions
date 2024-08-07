#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    int storageHome = 0;
    int storageOffice = 0;
    int buyHome = 0;
    int buyOffice = 0;

    vector<string> weather(n*2);
    cin >> weather[0];
    if (weather[0] == "chuva") {
        buyHome++;
    }

    for (i = 1; i < n*2; i++) {
        cin >> weather[i];
        bool leavingHome = i % 2 == 0 ? true : false;
        if (weather[i] == "chuva" && weather[i-1] == "sol") {
            if (leavingHome) {
                if (storageHome > 0) {
                    storageHome--;
                } else {
                    buyHome++;  
                }
            } else { // leavingOffice
                if (storageOffice > 0) {
                    storageOffice--;
                } else {
                    buyOffice++;
                }
            }
        } else if (weather[i] == "sol" && weather[i-1] == "chuva") {
            if (leavingHome) {
                storageHome++;
            } else {
                storageOffice++;
            }
        }
    }
    cout << buyHome << " " << buyOffice << endl;
    return 0;
}
