// Na fila para ser refatorado

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int i, j, n, caseNum=0, numQty;
    vector<int> vecSequence;
    
    while (cin >> n) {
        numQty = 1;
        caseNum++;
        vecSequence.clear();
        vecSequence.push_back(0);
        if (n == 0) {printf("Caso %d: %d numero\n0\n\n", caseNum, numQty); continue;}
        for (i=1; i <= n; i++) {
            for (j = 0; j < i; j++) {
                vecSequence.push_back(i);
            }
        }
        numQty = vecSequence.size();
        printf("Caso %d: %d numeros\n", caseNum, numQty);
        for (i=0; i < numQty-1; i++) {
            cout << vecSequence[i] << " ";
        }
        cout << vecSequence[i] << endl << endl;
    }
    return 0;
}
