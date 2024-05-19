#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, t, f, time;
    cin >> s >> t >> f;
    time = s + t + f;
    if (time >= 24){
        time -= 24;
    } else if (time < 00){
        time += 24;
    }
    cout << time << endl;
    return 0;
}