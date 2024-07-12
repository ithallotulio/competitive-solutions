#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    float difficulty, sum, score[7], finalScore;
    int n, i;
    cin >> n;
    while (n--) {
        cin >> name >> difficulty;
        for (i=0; i < 7; i++) {
            cin >> score[i];
        }
        sort(score, score + 7);
        for(i=1, sum=0; i < 6; i++) {
            sum += score[i];
        }
        finalScore = sum * difficulty;
        printf("%s %.2f\n", name.c_str(), finalScore);
    }
    return 0;
}
