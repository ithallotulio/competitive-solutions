#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, m;
    int i, missingSticker = 0;
    bool stickerNotFounded;

    cin >> n >> c >> m;
    vector<int> x(c), y(m);

    for (i = 0; i < c; i++) {cin >> x[i];}
    for (i = 0; i < m; i++) {cin >> y[i];}
    
    for (int sticker: x) {
       stickerNotFounded = find(y.begin(), y.end(), sticker) == y.end();
       if (stickerNotFounded) {
            missingSticker++;
       }
    }
    cout << missingSticker << endl;
    return 0;
}
