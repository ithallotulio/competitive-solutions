#include <iostream>
 
using namespace std;
 
int main() {
    string frase, fraseOK, fraseIN;
    int i, tam;
    getline(cin, frase);
    for (char c: frase){
        if (isalnum(c)) {
            fraseOK += toupper(c);
        }
    }
    tam = fraseOK.length();
    for (i=tam-1; i >= 0; i--) {
        fraseIN += fraseOK[i];
    }
    if (fraseIN == fraseOK) cout << "Parabens, voce encontrou o Palindromo Perdido!";
    else cout << "A busca continua, o Palindromo Perdido ainda nao foi encontrado.";
    return 0;
}

// 17:20 min