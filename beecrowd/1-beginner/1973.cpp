/* Observações a respeito do código:
* - Está na fila para ser refatorado
* - scanf tem melhor desempenho que cin (tentando rodar com cin dentro do loop dava "Time limit exceeded")
*/

#include <iostream>
 
using namespace std;
 
int main() {
    bool firstStarZero = false;
    int noSheepStar=0, nStar, i=1, sheep, stolenStar=0;
    long long int nonStoleSheep=0;
    cin >> nStar;
    cin >> sheep;
    nonStoleSheep = sheep-1;
    stolenStar++;
    if ((sheep - 1) == 0) {firstStarZero = true;}
    if (sheep%2) {
        for (i=1; i < nStar; i++) {
            scanf("%d", &sheep);
            if (sheep%2) {
                nonStoleSheep += sheep-1;
                if (sheep-1 == 0) {noSheepStar++;}
                stolenStar++;
            } else {
                nonStoleSheep += sheep-1;
                nonStoleSheep -= (i - noSheepStar);
                if (firstStarZero) {nonStoleSheep += 1;}
                stolenStar++;
                i++;
                break;
            }
        }
    }
    for (; i < nStar; i++){
        scanf("%d", &sheep);
        nonStoleSheep += sheep;
    }
    cout << stolenStar << " " << nonStoleSheep << endl;
    return 0;
}