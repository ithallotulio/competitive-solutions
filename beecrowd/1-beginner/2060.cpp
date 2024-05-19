#include <bits/stdc++.h>

using namespace std;

int main() {
    int multiple[6] = {0};
    int n, x, i;
    cin >> n;
    while (n--) {
        cin >> x;
        for (i=2; i <= 5; i++) {
            if (x % i == 0) multiple[i]++;
        }
    }
    for (i=2; i <= 5; i++) {
        cout << multiple[i] << " Multiplo(s) de " << i << endl;
    }
    return 0;
}
