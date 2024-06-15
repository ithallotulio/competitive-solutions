#include <bits/stdc++.h>

using namespace std;

int isantigo(string placa);
int ismercosul(string placa);


int main() {
    string placa;
    cin >> placa;
    if (placa.length() == 7 && ismercosul(placa)) {
        cout << 2 << endl;
        return 0;
    }
    if (placa.length() == 8 && isantigo(placa)) {
        cout << 1 << endl;
        return 0;
    }
    cout << 0 << endl;
    return 0;
}

int isantigo(string placa) {
    if (!isalpha(placa[0])) return 0;
    if (!isalpha(placa[1])) return 0;
    if (!isalpha(placa[2])) return 0;
    if (placa[3] != '-') return 0;
    if (!isdigit(placa[4])) return 0;
    if (!isdigit(placa[5])) return 0;
    if (!isdigit(placa[6])) return 0;
    if (!isdigit(placa[7])) return 0;
    return 1;
}

int ismercosul(string placa) {
    if (!isalpha(placa[0])) return 0;
    if (!isalpha(placa[1])) return 0;
    if (!isalpha(placa[2])) return 0;
    if (!isdigit(placa[3])) return 0;
    if (!isalpha(placa[4])) return 0;
    if (!isdigit(placa[5])) return 0;
    if (!isdigit(placa[6])) return 0;
    return 1;
}
