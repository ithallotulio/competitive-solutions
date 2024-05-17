#include <iostream>

using namespace std;
 
int main() {
    float volume, diameter, r, area, height;
    float pi = 3.14;
    while(cin >> volume >> diameter){
        r = diameter/2;
        area = pi * (r * r);
        height = volume / area;
        printf("ALTURA = %.2f\n", height);
        printf("AREA = %.2f\n", area);
    }
    return 0;
}
