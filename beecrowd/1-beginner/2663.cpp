#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, minQualifyCount, score, minQualifyScore, posFirstQualify, qualifyCount;
    vector <int> scores;
    cin >> n;
    cin >> minQualifyCount;
    while (n--) {
        cin >> score;
        scores.push_back(score);
    }

    sort(scores.begin(), scores.end());

    minQualifyScore = scores[scores.size()-1];
    auto it = lower_bound(scores.begin(), scores.end(), minQualifyScore);
    posFirstQualify = distance(scores.begin(), it);
    qualifyCount = scores.size() - posFirstQualify;

    while (qualifyCount < minQualifyCount) {
        minQualifyScore = scores[posFirstQualify-1];
        auto it = lower_bound(scores.begin(), scores.end(), minQualifyScore);
        posFirstQualify = distance(scores.begin(), it);
        qualifyCount = scores.size() - posFirstQualify;
    }

    cout << qualifyCount << endl;
    return 0;
}
