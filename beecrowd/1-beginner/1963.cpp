#include <iostream>
 
using namespace std;
 
int main() {
    double a, b;
    double diff, percentage;
    cin >> a >> b;
    diff = b - a;
    percentage = (diff / a) * 100;
    printf("%.2lf%%\n", percentage);
    return 0;
}
