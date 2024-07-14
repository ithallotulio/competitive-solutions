#include <bits/stdc++.h>

using namespace std;

int main() {
    int currSequence = 1, largestSequence = 0;
    size_t i;
    string dna;

    cin >> dna;

    for (i = 1; i < dna.length(); i++) {
        if (dna[i] == dna[i-1]) {
            currSequence++;
        } else {
            largestSequence = max(currSequence, largestSequence);
            currSequence = 1;
        }
    }
    largestSequence = max(currSequence, largestSequence);

    cout << largestSequence << endl;
    return 0;
}
