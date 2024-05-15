#include <iostream>
 
using namespace std;
 
int main() {
    int i, teaType, guess, correct = 0;
    cin >> teaType;
    for (i=0; i < 5; i++){
        cin >> guess;
        if (guess == teaType) correct++;
    }
    cout << correct << endl;
    return 0;
}