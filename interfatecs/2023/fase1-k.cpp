#include <iostream>
 
using namespace std;

int verificador[2000] = {0};
 
int main() {
    int i, j;
    int n, m;
    int v, w, d;
    char res;
    string ress;

    while (cin >> n >> m) {
        res = 'S';
        if (n == 0 && m == 0) break;
        for (i=0; i < m; i++) {
            cin >> v >> w >> d;
            if (d == 2){for(j=min(v,w); j <= max(v,w); j++) {verificador[j]++;verificador[j]++;}}
            else {
                for(j=v; j <= w; j++) {
                    verificador[j]++;
                }
                for (j=w; j <= v; j++){
                    if (verificador[j] > 1){
                        verificador[j]++;
                    }
                }
            }
        }
        if (verificador[1] < 2) {res = 'N';}
        else if (verificador[n] < 2) {res = 'N';}

        for (i=2; i < n; i++) {
            if (verificador[i] < 4) {
                res = 'N';
                break;
            }
        }
        //cout << res << endl;
        ress += res;
    }
    for (char c: ress) {
        cout << c << endl;
    }
    return 0;
}

// 35 min
