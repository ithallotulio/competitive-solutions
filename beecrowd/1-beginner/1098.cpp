#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j;
    for (i=0; i <= 20; i+=2) {
        for (j=1; j <= 3; j++) {
            cout << "I=" << i/10.0 << " J=" << j+(i/10.0) << endl;
        }
    }
    return 0;
}
