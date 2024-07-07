#include <bits/stdc++.h>

using namespace std;

int main() {
    int availableChicken, availableBeef, availablePasta;
    int requestedChiken, requestedBeef, requestPasta;
    int notReceive;

    cin >> availableChicken >> availableBeef >> availablePasta;
    cin >> requestedChiken >> requestedBeef >> requestPasta;

    notReceive = max(0, requestedChiken - availableChicken) + 
                 max(0, requestedBeef - availableBeef) +
                 max(0, requestPasta - availablePasta);

    cout << notReceive << endl;
    return 0;
}
