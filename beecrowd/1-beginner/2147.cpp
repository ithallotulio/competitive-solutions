#include <bits/stdc++.h>

using namespace std;

int main() {
    string galopeira;
    float timeOneKey = 1 / 100.00;
    float timeSpent;
    int n;
    cin >> n;
    while (n--) {
         cin >> galopeira;
         timeSpent = galopeira.length() * timeOneKey;
         printf("%.2f\n", timeSpent);
    }
    return 0;
}
