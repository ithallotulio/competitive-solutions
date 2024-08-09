#include <bits/stdc++.h>

#define f first
#define s second

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int boxes[n][n];
    int minWeight = 0;
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            cin >> boxes[i][j];
        }
    }

    vector<int> check(n, 0);
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            check[i] += boxes[j][i];
        }
    }

    // cout << endl << "Check: ";
    // for (int i: check) {
    //     cout << i << " ";
    // }
    // cout << endl;
    int start = 0;
    int end = n-1;
    for (i=n-2; i >= 0; i--) {
        for (j=start; j <= end; j++) {
            minWeight += boxes[i+1][j];
            check[j] -= boxes[i+1][j];
        }
       //cout << minWeight << " ";
        int sumLeft = 0;
        int sumRight = 0;
        for (j=0; j <= (end-start)/2; j++) {
            sumLeft += check[start+j];
            sumRight += check[end-j];
        }
        //cout << "sumleft " << sumLeft << " sumright " << sumRight << endl;
        if (sumLeft >= sumRight) {
            start++;
        } else {
            end--;
        }
        // cout << endl << "Check: ";
        // for (int i: check) {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
    minWeight += boxes[0][start];
    cout << minWeight << endl;
    return 0;
}

