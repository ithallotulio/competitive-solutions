#include <bits/stdc++.h>

using namespace std;

int main() {
    string cpf;
    cin >> cpf;
    for (char c: cpf) {
        if (isdigit(c)) {
            cout << c;
        } else {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}
