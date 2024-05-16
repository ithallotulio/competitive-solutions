#include <iostream>
 
using namespace std;
 
int main() {
    string formato, res;
    int n, i, j;
    cin >> n >> formato;

    if (formato == "maiusculas") res += 'A';
    else res += 'a';

    for (i=0; i < n; i++) {
        for (j=25-i; j > 0; j--) {
            cout << ".";
        }
        cout << res << endl;
        res += (res[i]+1);
    }
    return 0;
}

// 10 min