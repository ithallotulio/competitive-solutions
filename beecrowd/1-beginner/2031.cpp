#include <iostream>
 
using namespace std;
 
int main() {
    string p1, p2;
    int i, n;
    cin >> n;
    for (i=0; i < n; i++){
        cin >> p1 >> p2;
        if (p1 == "ataque"){
            if (p2 == "ataque") {cout << "Aniquilacao mutua" << endl; continue;}
            else {cout << "Jogador 1 venceu" << endl; continue;}
        }
        if (p1 == "papel"){
            if (p2 == "papel") {cout << "Ambos venceram" << endl; continue;}
            else {cout << "Jogador 2 venceu" << endl; continue;}
        }
        if (p1 == "pedra"){
            if (p2 == "pedra"){cout << "Sem ganhador" << endl;}
            else if (p2 == "papel") {cout << "Jogador 1 venceu" << endl;}
            else {cout << "Jogador 2 venceu" << endl;}
        }
    }
    return 0;
}