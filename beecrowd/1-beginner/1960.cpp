#include <iostream>
 
using namespace std;
 
int main() {
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string res;
    int romanValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int n, i;
    cin >> n;
    for (i=0; i < 13; i++) {
        while (n >= romanValues[i]){
            res += roman[i];
            n -= romanValues[i];
        }
    }
    cout << res << endl;
    return 0;
}
