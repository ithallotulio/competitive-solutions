#include <iostream>
 
using namespace std;
 
int main() {
    string time;
    int timeHour, timeMinutes, delayedHours, delayedMinutes;

    while (cin >> time) {
        delayedMinutes = 0;
        timeHour = time[0] - '0';
        if (timeHour >= 7) {
            timeMinutes = stoi(time.substr(2,3));
            delayedHours = timeHour - 7;
            delayedMinutes = (delayedHours * 60) + timeMinutes;
        }
        cout << "Atraso maximo: " << delayedMinutes << endl;
    }
    return 0;
}