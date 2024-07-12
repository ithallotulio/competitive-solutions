#include <bits/stdc++.h>

using namespace std;

void dashes();

int main() {
    int i;
    dashes();
    cout << "|  decimal  |  octal  |  Hexadecimal  |\n";
    dashes();
    for (i = 0; i < 16; i++) {
        printf("|     %2d    |   %2o    |      %2X       |\n", i, i, i);
    }
    dashes();
    return 0;
}

void dashes() {
    for (int i=0; i < 39; i++) {
        cout << "-";
    }
    cout << endl;
}
