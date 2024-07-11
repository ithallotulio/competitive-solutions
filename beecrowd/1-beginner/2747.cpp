#include <bits/stdc++.h>

using namespace std;

void step1();
void step2();
void step3();
void step4();

int main() {
    step1();
    step2();
    step3();
    step4();
    return 0;
}

void step1() {
    for (int i=0; i < 39; i++) {
        cout << "-";
    }
    cout << endl;
}
 
void step2() {
    cout << "|";
    for (int i=0; i < 37; i++) {
        cout << " ";
    }
    cout << "|" << endl;
}

void step3() {
    step2();
    step2();
    step2();
    step2();
}

void step4() {
    step1();
}
