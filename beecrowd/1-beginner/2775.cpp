#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, j;
    int totalTime;
    while (cin >> n) {
        vector<int> packet(n);
        vector<int> time(n);
        for (i=0; i < n; i++) {cin >> packet[i];}
        for (i=0; i < n; i++) {cin >> time[i];}

        totalTime = 0;
        for (i=0; i < n; i++) {
            for (j=0; j < n-i-1; j++) {
                if (packet[j] > packet[j+1]) {
                    totalTime += time[j] + time[j+1];
                    swap(packet[j], packet[j+1]);
                    swap(time[j], time[j+1]);
                }
            }
        }
        cout << totalTime << endl;
    }
    return 0;
}
