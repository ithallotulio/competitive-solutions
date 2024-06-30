#include <bits/stdc++.h>

#define x first
#define y second

using namespace std;

int main() {
    int t, spellLvl, spellDmg, spellRadius;
    double hypotenuse;
    unordered_map<string, vector<int>> spells;
    spells["fire"] = {200, 20, 30, 50};
    spells["water"] = {300, 10, 25, 40};
    spells["earth"] = {400, 25, 55, 70};
    spells["air"] = {100, 18, 38, 60};
    string spellCasted;
    pair<int, int> spellPos;
    pair<int, int> playerHitbox;
    pair<int, int> playerPos;
    pair<int, int> playerDistToExplosion;
    bool playerGetHit, explosionLeft, explosionRight, explosionUp, explosionDown;

    cin >> t;
    while (t--) {
        cin >> playerHitbox.x >> playerHitbox.y >> playerPos.x >> playerPos.y;
        cin >> spellCasted >> spellLvl >> spellPos.x >> spellPos.y;

        spellDmg = spells[spellCasted][0];
        spellRadius = spells[spellCasted][spellLvl];
        
        explosionLeft = spellPos.x < playerPos.x;
        explosionRight = spellPos.x > (playerPos.x + playerHitbox.x);
        explosionUp = spellPos.y > (playerPos.y + playerHitbox.y);
        explosionDown = spellPos.y < playerPos.y;

        if (explosionLeft) {
            playerDistToExplosion.x = playerPos.x - spellPos.x;
        } else if (explosionRight) {
            playerDistToExplosion.x = max(0, spellPos.x - (playerHitbox.x + playerPos.x));
        } else {
            playerDistToExplosion.x = 0;
        }
        if (explosionUp) {
            playerDistToExplosion.y = max(0, spellPos.y - (playerHitbox.y + playerPos.y));
        } else if (explosionDown) {
            playerDistToExplosion.y = playerPos.y - spellPos.y;
        } else {
            playerDistToExplosion.y = 0;
        }

        if (playerDistToExplosion.x == 0 || playerDistToExplosion.y == 0) {
            playerGetHit = spellRadius >= (playerDistToExplosion.x + playerDistToExplosion.y);
        } else {
            hypotenuse = sqrt((pow(playerDistToExplosion.x, 2) + pow(playerDistToExplosion.y, 2)));
            playerGetHit = spellRadius >= hypotenuse;
        }

        if (playerGetHit) {
            cout << spellDmg << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
