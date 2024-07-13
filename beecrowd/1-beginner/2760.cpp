#include <bits/stdc++.h>

using namespace std;

int main() {
    int i;
    string phrase[3];
    getline(cin, phrase[0]);
    getline(cin, phrase[1]);
    getline(cin, phrase[2]);
    for (i=0; i < 3; i++) {
        cout << phrase[i] << phrase[(i+1)%3] << phrase[(i+2)%3] << endl;
    }
    printf("%.10s%.10s%.10s\n", phrase[0].c_str(), phrase[1].c_str(), phrase[2].c_str());
    return 0;
}
