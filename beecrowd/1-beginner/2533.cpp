#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    int grade, weight;
    int weightedGrade, totWeight;
    float finalGrade;
    while (cin >> n) {
        weightedGrade = 0;
        totWeight = 0;
        while (n--) {
            cin >> grade >> weight;
            totWeight += weight;
            weightedGrade += grade * weight;
            finalGrade = weightedGrade / (totWeight*100.0);
        }
        printf("%.4f\n", finalGrade);
    }
    return 0;
}
