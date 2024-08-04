#include <bits/stdc++.h>

#define f first
#define s second

using namespace std;

int main() {
    int si, ei;
    char sj, ej;

    cin >> sj >> si >> ej >> ei;

    pair <int, char> start = make_pair(si, sj);
    pair <int, char> end = make_pair(ei, ej);
    
    if (end.f < 1 || end.f > 8 || end.s < 'a' || end.s > 'h') {
        cout << "INVALIDO" << endl;
        return 0;
    }

    pair <int, int> validMoves[8] = {{1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}};
    
    for (pair vm: validMoves) {
        pair <int, char> validPos = {start.f + vm.f, start.s + vm.s};
        if (end == validPos) {
            cout << "VALIDO" << endl;
            return 0;
        }
    }
    cout << "INVALIDO" << endl;
    return 0;
}
