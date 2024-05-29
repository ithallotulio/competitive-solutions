#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, value[3];
    bool isTriangle;
    for (i=0; i < 3; i++) {
        cin >> value[i];
    }
    sort(value, value + 3);
    isTriangle = value[0] + value[1] > value[2];
    if (!isTriangle) {
        cout << "Invalido" << endl;
        return 0;
    }
    if (value[0] == value[1] && value[1] == value[2]) {
        cout << "Valido-Equilatero" << endl;
    } else if (value[0] == value[1] || value[0] == value[2] || value[1] == value[2]) {
        cout << "Valido-Isoceles" << endl;
    } else { 
        cout << "Valido-Escaleno" << endl;
    }
    if (value[0]*value[0] + value[1]*value[1] == value[2]*value[2]) {
        cout << "Retangulo: S" << endl;
    } else {
        cout << "Retangulo: N" << endl;
    }
    return 0;
}