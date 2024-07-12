#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    int serves, blocks, attacks;
    int sucessServes, successBlocks, sucessAttacks;
    int teamServes=0, teamBlocks=0, teamAttacks=0;
    int teamSucessServes=0, teamSucessBlocks=0, teamSucessAttacks=0;
    float percentageSucessServes, percentageSucessBlocks, percentageSucessAttacks;
    int n;
    cin >> n;
    while (n--) {
        cin >> name;
        cin >> serves >> blocks >> attacks;
        cin >> sucessServes >> successBlocks >> sucessAttacks;
        teamServes += serves;
        teamBlocks += blocks;
        teamAttacks += attacks;
        teamSucessServes += sucessServes;
        teamSucessBlocks += successBlocks;
        teamSucessAttacks += sucessAttacks;
    }
    percentageSucessServes = (float)teamSucessServes / teamServes * 100;
    percentageSucessBlocks = (float)teamSucessBlocks / teamBlocks * 100;
    percentageSucessAttacks = (float)teamSucessAttacks / teamAttacks * 100;
    printf("Pontos de Saque: %.2f %%.\n", percentageSucessServes);
    printf("Pontos de Bloqueio: %.2f %%.\n", percentageSucessBlocks);
    printf("Pontos de Ataque: %.2f %%.\n", percentageSucessAttacks);
    return 0;
}
