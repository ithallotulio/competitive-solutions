#include <iostream>
 
using namespace std;
 
int main() {
    int i, jump, nPipes, currPipe, lastPipe, pipeDiff;
    cin >> jump >> nPipes;
    cin >> currPipe;
    for (i=1; i < nPipes; i++) {
        lastPipe = currPipe;
        cin >> currPipe;
        pipeDiff = abs(lastPipe - currPipe);
        if (jump < pipeDiff) {
            cout << "GAME OVER" << endl;
            return 0;
        }
    }
    cout << "YOU WIN" << endl;
    return 0;
}
