#include <bits/stdc++.h>

using namespace std;

int main() {
    string message;
    int acc;
    cin >> message;
    acc = count(message.begin(), message.end(), '1');
    cout << message;
    if (acc % 2 == 0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}

/*  Registro de versões anteriores:

    *** Primeira Versão ***

int main() {
    string message;
    int messageInt, sum = 0;
    cin >> message;
    messageInt = stoi(message);
    while (messageInt != 0) {
        sum += messageInt % 10;
        messageInt /= 10;
    }
    cout << message;
    if (sum%2 == 0) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}

    *** Segunda Versão ***

int main() {
    string message;
    int acc = 0;
    cin >> message;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == '1') {
            acc++;
        }     
    }
    cout << message;
    if (acc%2 == 0) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}
*/
