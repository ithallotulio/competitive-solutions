#include <bits/stdc++.h>

using namespace std;

int main() {
    int dd, mm, yy;
    char slash;
    cin >> dd >> slash >> mm >> slash >> yy;
    printf("%02d/%02d/%02d\n", mm, dd, yy);
    printf("%02d/%02d/%02d\n", yy, mm, dd);
    printf("%02d-%02d-%02d\n", dd, mm, yy);
    return 0;
}
