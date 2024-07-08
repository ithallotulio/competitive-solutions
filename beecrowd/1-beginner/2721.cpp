#include <bits/stdc++.h>

using namespace std;

int main() {
    string names[] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    int namesQty;
    int snowballs;
    int lastSnowBall;
    int sum = 0, i = 9;
    while (i--) {
        cin >> snowballs;
        sum += snowballs;
    }
    namesQty = sizeof(names) / sizeof(names[0]);
    lastSnowBall = (sum % namesQty) - 1;
    if (lastSnowBall == -1) {
        lastSnowBall = namesQty - 1;
    }
    cout << names[lastSnowBall] << endl;
    return 0;
}
