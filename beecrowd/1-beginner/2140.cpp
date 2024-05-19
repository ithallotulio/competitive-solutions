#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j;
    int price, paid, change, possible;
    int bills[6] = {2, 5, 10, 20, 50, 100};
    while (cin >> price >> paid && (price != 0 || paid != 0)) {
        change = paid - price;
        for (i=0; i < 6; i++){
            possible = 0;
            for (j=1+i; j < 6; j++){
                if (bills[i]+bills[j] == change){
                    possible = 1;
                    break;
                }
            }
            if (possible) break;
        }
        if (possible){
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
    return 0;
}
