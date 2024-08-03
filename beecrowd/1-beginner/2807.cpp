#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, tam;
    cin >> tam;

    vector<int> iccanobif(40, 1);
    for (i=2; i < tam; i++) {
        iccanobif[i] = iccanobif[i-1] + iccanobif[i-2];
    }
    for (i = 0; i < tam-1; i++) {
        cout << iccanobif[(tam-1)-i] << " ";
    }
    cout << iccanobif[(tam-1)-i] << endl;
    return 0;
}
