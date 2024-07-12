#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    int i, j, k, l;
    int vizinhos;
    cin >> n >> q;
    int mat[n][n];
    int temp[n][n];
    string entrada;
    for (i=0; i < n; i++) {
        cin >> entrada;
        for (j=0; j < n; j++) {
            mat[i][j] = entrada[j] - '0';
        }
    }
    while (q--) {
        for (i=0; i < n; i++) {
            for (j=0; j < n; j++) {
                vizinhos = 0;
                for (k=i-1; k <= i+1; k++) {
                    if (k < 0) continue;
                    if (k >= n) continue;
                    for (l=j-1; l <= j+1; l++) {
                        if (l < 0) continue;
                        if (l >= n) continue;
                        if (k == i && l == j) continue;
                        vizinhos += mat[k][l];
                    }
                }
                if (mat[i][j]) {
                    if (vizinhos < 2) temp[i][j] = 0;
                    else if (vizinhos > 3) temp[i][j] = 0;
                    else temp[i][j] = 1;
                } else {
                    if (vizinhos == 3) temp[i][j] = 1;
                    else temp[i][j] = 0;
                }
            }
        }
        for (i=0; i < n; i++) {
            for (j=0; j < n; j++) {
                mat[i][j] = temp[i][j];
            }
        }
    }
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
