#include <bits/stdc++.h>

using namespace std;

int main() {
    float degree;
    int h, m, s;
    while (cin >> degree) {
        if (degree < 90) {
            cout << "Bom Dia!!" << endl;
        } else if (degree < 180) {
            cout << "Boa Tarde!!" << endl;
        } else if (degree < 270) {
            cout << "Boa Noite!!" << endl;
        } else if (degree < 360) {
            cout << "De Madrugada!!" << endl;
        }
        h = (((degree * 240) / 60) / 60);
        m = (int(degree * 240) / 60) % 60;
        s = int(degree * 240) % 60;
        h = (h + 6) % 24;
        printf("%02d:%02d:%02d\n", h, m, s);
    }
    return 0;
}
// 24 hours = 86400 seconds
// 1 circle = 360 degrees
// 1 degree = 240 seconds
