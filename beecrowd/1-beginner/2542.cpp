#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int m, l;
    int i, j, a;
    int mpick, lpick, apick;
    while (cin >> n) {
        cin >> m >> l;
        int ma[m][n], la[l][n];
        for (i=0; i < m; i++) {
            for (j=0; j < n; j++) {
                cin >> ma[i][j];
            }
        }
        for (i=0; i < l; i++) {
            for (j=0; j < n; j++) {
                cin >> la[i][j];
            }
        }
        cin >> mpick >> lpick >> apick;
        mpick--;
        lpick--;
        apick--;
        if (ma[mpick][apick] > la[lpick][apick]) {
            cout << "Marcos" << endl;
        } else if (ma[mpick][apick] < la[lpick][apick]) {
            cout << "Leonardo" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }
    return 0;
}