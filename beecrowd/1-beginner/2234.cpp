#include <bits/stdc++.h>

using namespace std;

int main() {
    int hotdogs, participants;
    float average;
    cin >> hotdogs >> participants;
    average = (float)hotdogs / participants;
    printf("%.2f\n", average);
    return 0;
}