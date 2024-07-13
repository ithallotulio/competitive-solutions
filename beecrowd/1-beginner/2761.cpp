#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    float b;
    char c;
    string d;

    cin >> a >> b >> c;
    cin.ignore();
    getline(cin, d);

    printf("%d%f%c%s\n", a, b, c, d.c_str());
    printf("%d\t%f\t%c\t%s\n", a, b, c, d.c_str());
    printf("%10d%10f%10c%10s\n", a, b, c, d.c_str());

    return 0;
}
