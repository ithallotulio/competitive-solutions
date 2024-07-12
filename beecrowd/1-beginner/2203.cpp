#include <bits/stdc++.h>

using namespace std;

int main() {
    double fiddleX, fiddleY, invaderX, invaderY, invaderSpeed, castingRadius, crowsRadius;
    double fiddleRange, invaderDistance, invaderRunDistance;
    while (cin >> fiddleX >> fiddleY >> invaderX >> invaderY >> invaderSpeed >> castingRadius >> crowsRadius) {
        fiddleRange = castingRadius + crowsRadius;
        invaderDistance = sqrt(pow(invaderX - fiddleX, 2) + pow(invaderY - fiddleY, 2));
        invaderRunDistance = invaderSpeed * 1.5;
        if (fiddleRange >= (invaderDistance + invaderRunDistance)) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}
