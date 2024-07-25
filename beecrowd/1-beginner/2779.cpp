#include <bits/stdc++.h>

using namespace std;

int main() {
    int totalCards, purchasedCards, card, uniqueCards = 0;
    cin >> totalCards >> purchasedCards;
    vector<bool> album(totalCards);
    while (purchasedCards--) {
        cin >> card;
        if (!album[card]) {
            album[card] = true;
            uniqueCards++;
        }
    }
    cout << totalCards - uniqueCards << endl;
    return 0;
}
