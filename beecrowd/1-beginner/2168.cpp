#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j;
    int cameraQty;
    int n;
    cin >> n;
    int mat[n+1][n+1];
    for (i=0; i < n+1; i++) {
        for (j=0; j < n+1; j++) {
            cin >> mat[i][j];
        }
    }
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            cameraQty = mat[i][j] + mat[i+1][j] + mat[i][j+1] + mat[i+1][j+1];
            if (cameraQty >= 2) cout << "S";
            else cout << "U";
        }
        cout << endl;
    }
    return 0;
}