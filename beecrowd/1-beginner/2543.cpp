#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, myPage, page, isLigaoflegends, videosCount;
    while (cin >> n >> myPage) {
        videosCount = 0;
        while (n--) {
            cin >> page >> isLigaoflegends;
            if (page == myPage && !isLigaoflegends) {
                videosCount++;
            }
        }
        cout << videosCount << endl;
    }
    return 0;
}
