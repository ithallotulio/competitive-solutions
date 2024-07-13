#include <bits/stdc++.h>

using namespace std;

int main() {
    int i;
    char c[3];
    cin >> c[0] >> c[1] >> c[2];
    for (i=0; i < 3; i++) {
        printf("A = %c, B = %c, C = %c\n", c[i], c[(i+1)%3], c[(i+2)%3]);
    }
    return 0;
}
