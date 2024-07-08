#include <bits/stdc++.h>

using namespace std;

bool isValid(string nameplate);

int main() {
    int n, lastDigit;
    string nameplate;
    string scale[] = {"FRIDAY", "MONDAY", "MONDAY", "TUESDAY", "TUESDAY", "WEDNESDAY", "WEDNESDAY", "THURSDAY", "THURSDAY", "FRIDAY"};
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, nameplate);
        if (isValid(nameplate)) {
            lastDigit = nameplate[7] - '0';
            cout << scale[lastDigit] << endl;
        } else {
            cout << "FAILURE" << endl;
        }
    }
    return 0;
}

bool isValid(string nameplate) {
    if (nameplate.length() > 8) return false;
    if (!isalpha(nameplate[0]) || !isupper(nameplate[0])) return false;
    if (!isalpha(nameplate[1]) || !isupper(nameplate[1])) return false;
    if (!isalpha(nameplate[2]) || !isupper(nameplate[2])) return false;
    if (nameplate[3] != '-') return false;
    if (!isdigit(nameplate[4])) return false;
    if (!isdigit(nameplate[5])) return false;
    if (!isdigit(nameplate[6])) return false;
    if (!isdigit(nameplate[7])) return false;
    return true;
}
