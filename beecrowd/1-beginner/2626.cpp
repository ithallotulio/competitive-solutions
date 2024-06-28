#include <bits/stdc++.h>

using namespace std;

bool p1win(string p1, string p2);

int main() {
    string dodo, leo, peper;
    while (cin >> dodo >> leo >> peper) {
        if (p1win(dodo, leo) && p1win(dodo, peper)) {
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        } else if (p1win(leo, dodo) && p1win(leo, peper)) {
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        } else if (p1win(peper, dodo) && p1win(peper, leo)) {
            cout << "Urano perdeu algo muito precioso..." << endl;
        } else {
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }
    return 0;
}

bool p1win(string p1, string p2) {
    if (p1 == "pedra" && p2 == "tesoura") return true;
    else if (p1 == "papel" && p2 == "pedra") return true;
    else if (p1 == "tesoura" && p2 == "papel") return true;
    return false;
}
