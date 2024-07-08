#include <bits/stdc++.h>

using namespace std;

int main() {
    int timeLimit, timeA, timeB;
    cin >> timeLimit;
    cin >> timeA >> timeB;
    if (timeA + timeB > timeLimit) {
        cout << "Deixa para amanha!" << endl;
    } else {
        cout << "Farei hoje!" << endl;
    }
    return 0;
}
