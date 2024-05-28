#include <bits/stdc++.h>

using namespace std;

int main() {
    bool isLightsaber = true;
    int n, m;
    int i, j, k, l;
    cin >> n >> m;
    int mat[n][m];

    for (i=0; i < n; i++) {
        for (j=0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (i=1; i < n-1; i++) {
        for (j=1; j < m-1; j++) {
            if (mat[i][j] == 42) {
                isLightsaber = true;
                for (k = i-1; k <= i+1; k++) {
                    for (l = j-1; l <= j+1; l++) {
                        if (k == i && l == j) continue;
                        if (mat[k][l] != 7) {
                            isLightsaber = false;
                            break;
                        }
                    }
                }
                if (isLightsaber) {
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "0 0" << endl;
    return 0;
}