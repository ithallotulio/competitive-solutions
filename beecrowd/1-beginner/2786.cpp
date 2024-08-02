#include <bits/stdc++.h>

using namespace std;

int main() {
    int width, height;
    cin >> height >> width;

    cout << (width * height) + ((width-1) * (height-1)) << endl;
    cout << ((height-1) * 2) + ((width-1) * 2) << endl;

    return 0;
}
