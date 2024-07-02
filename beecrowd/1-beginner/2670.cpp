#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, aFloor, bFloor, cFloor;
    cin >> a >> b >> c;
    aFloor = b*2 + c*4;
    bFloor = a*2 + c*2;
    cFloor = a*4 + b*2;
    cout << min(min(aFloor, bFloor), cFloor) << endl;
    return 0;
}
