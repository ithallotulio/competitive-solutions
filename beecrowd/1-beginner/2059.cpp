#include <bits/stdc++.h>

using namespace std;

int isEven(int n);

int main() {
    int p1ChoseEven, p1, p2, cheated, accused, p1Won;
    cin >> p1ChoseEven >> p1 >> p2 >> cheated >> accused;
    if (cheated && !accused) {
        p1Won = 1;
    }
    else if (cheated && accused) {
        p1Won = 0;
    }
    else {
        if (isEven(p1+p2)) {
            if (p1ChoseEven) {
                p1Won = 1;
            } else {
                p1Won = 0;
            }
        } else if (!isEven(p1+p2)) {
            if (!p1ChoseEven) {
                p1Won = 1;
            } else {
                p1Won = 0;
            }
        }
    }
    if (p1Won) cout << "Jogador 1 ganha!" << endl;
    else cout << "Jogador 2 ganha!" << endl;
    return 0;
}

int isEven(int n){
    if (n%2==0) return 1;
    return 0;
}