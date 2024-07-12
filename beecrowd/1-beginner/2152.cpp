#include <bits/stdc++.h>

using namespace std;

int main() {
    string hoursFormatted, minutesFormatted;
    int n, hours, minutes, isDoorOpen;
    cin >> n;
    while (n--) {
        cin >> hours >> minutes >> isDoorOpen;
        hoursFormatted = (hours < 10) ? "0" +  to_string(hours) : to_string(hours);
        minutesFormatted = (minutes < 10) ? "0" + to_string(minutes) : to_string(minutes);
        cout << hoursFormatted << ":" << minutesFormatted << " - " << "A porta ";
        if (isDoorOpen) cout << "abriu!" << endl;
        else cout << "fechou!" << endl;
    }
    return 0;
}
