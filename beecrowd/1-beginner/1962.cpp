#include <iostream>
 
using namespace std;
 
int main() {
    string christEra;
    int n, i, currYear, yearsDiff;
    cin >> n;
    for (i=0; i < n; i++){
        cin >> currYear;
        if ((currYear - 2014) > 0) {
            yearsDiff = currYear - 2014;
            christEra = "A.C.";
        } else {
            yearsDiff = 2015 - currYear;
            christEra = "D.C.";
        }
        cout << yearsDiff << " " << christEra << endl;
    }
    return 0;
}
