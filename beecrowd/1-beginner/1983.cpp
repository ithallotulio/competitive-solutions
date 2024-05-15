#include <iostream>
 
using namespace std;
 
int main() {
    int n, i, id, highNoteId;
    float note, highNote;
    cin >> n;
    cin >> highNoteId >> highNote;
    for (i = 1; i < n; i++) {
        cin >> id >> note;
        if (note > highNote) {
            highNote = note;
            highNoteId = id;
        }
    }
    if (highNote < 8){
        cout << "Minimum note not reached" << endl;
        return 0;
    }
    cout << highNoteId << endl;
    return 0;
}
