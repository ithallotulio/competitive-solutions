#include <bits/stdc++.h>

using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    size_t pos = sentence.find(',');
    cout << sentence.substr(0, pos) << endl;
    cout << sentence.substr(pos+1) << endl;
    return 0;
}
