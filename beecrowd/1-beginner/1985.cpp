#include <iostream>
 
using namespace std;
 
int main() {
    float productsPrice[] = {0, 1.5, 2.5, 3.5, 4.5, 5.5};
    float totPurchased = 0;
    int i, n, qty, code, lastDigitCode;

    cin >> n;
    for (i=0; i < n; i++) {
        cin >> code >> qty;
        lastDigitCode = code % 10;
        totPurchased += productsPrice[lastDigitCode] * qty;
    }
    printf("%.2f\n", totPurchased);
    return 0;
}
