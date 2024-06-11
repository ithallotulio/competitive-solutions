#include <bits/stdc++.h>

using namespace std;

int mat[100][100];

int main() {
    int m, n, i, j, count;
    while (cin >> m >> n) {
        for (i=0; i < m; i++) {
            for (j=0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        for (i=0; i < m; i++) {
            for (j=0; j < n; j++) {
                if (mat[i][j] == 1) {
                    cout << 9;
                } else {
                    count = 0;
                    if (i+1 < m && mat[i+1][j] == 1) {count++;}
                    if (i-1 >= 0 && mat[i-1][j] == 1) {count++;}
                    if (j+1 < n && mat[i][j+1] == 1) {count++;}
                    if (j-1 >= 0 && mat[i][j-1] == 1) {count++;}
                    cout << count;
                }
            }
            cout << endl;
        }
    }
    return 0;
}