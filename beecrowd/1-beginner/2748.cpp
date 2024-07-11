#include <bits/stdc++.h>

#define MAX 39

using namespace std;


void step1();
void step2();
void step3();
void step4();
void step5();
void step6();
void step7();
void write(string text);

int main() {
    step1();
    step2();
    step3();
    step4();
    step5();
    step6();
    step7();
    return 0;
}

void step1() {
    for (int i=0; i < MAX; i++) {
        cout << "-";
    }
    cout << endl;
}
 
void step2() {
    write("Roberto");
}

void step3() {
    write("");
}

void step4() {
    write("5786");
}

void step5() {
    step3();
}

void step6() {
    write("UNIFEI");
}

void step7() {
    step1();
}

void write(string text) {
    int i;
    cout << "|";
    for (i = 1; i < 9; i++) {
        cout << " ";
    }
    cout << text;
    for (i += text.length(); i < (MAX - 1); i++) {
        cout << " ";
    }
    cout << "|" << endl;
}
