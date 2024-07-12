#include <bits/stdc++.h>

using namespace std;

int main() {
    string action;
    int tabs, n;
    cin >> tabs >> n;
    while (n--) {
        cin >> action;
        if (action == "fechou") tabs++;
        else if (action == "clicou") tabs--;
    }
    cout << tabs << endl;
    return 0;
}
