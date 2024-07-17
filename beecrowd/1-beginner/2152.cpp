#include <bits/stdc++.h>

using namespace std;

int main() {
    string doorState;
    int n, hours, minutes, isDoorOpen;
    cin >> n;
    while (n--) {
        cin >> hours >> minutes >> isDoorOpen;
        if (isDoorOpen) {
            doorState = "abriu";
        } else {
            doorState = "fechou";
        }
        printf("%02d:%02d - A porta %s!\n", hours, minutes, doorState.c_str());
    }
    return 0;
}
