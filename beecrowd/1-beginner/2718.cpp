#include <bits/stdc++.h>

using namespace std;

string toBinary(long long int n);

int main() {
    long long int x;
    int n, i;
    int sequence, largestSequence;
    string binary;
    cin >> n;
    while (n--) {
        cin >> x;
        binary = toBinary(x);
        sequence = 0;
        largestSequence = 0;
        for (i=0; i < binary.length(); i++) {
            if (binary[i] == '1') {
                sequence++;
            } else {
                largestSequence = max(sequence, largestSequence);
                sequence = 0;
            }
        }
        largestSequence = max(sequence, largestSequence);
        cout << largestSequence << endl;
    }
    return 0;
}

string toBinary(long long int n) {
    string binary;
    if (n == 0) return "0";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary;
}
