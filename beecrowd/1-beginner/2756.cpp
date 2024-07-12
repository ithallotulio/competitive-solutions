#include <bits/stdc++.h>

using namespace std;

int main() {
    char c = 'A';
    int i, spaceBetween, spaceBefore;

    printf("       %c\n", c);

    for (i=1; i < 5; i++) {
        spaceBefore = 7-i;
        while (spaceBefore--) {
            printf(" ");
        }
        printf("%c", c+i);

        spaceBetween = (i * 2) - 1;
        while (spaceBetween--) {
            printf(" ");
        }
        printf("%c\n", c+i);
    }

    for (i -= 2; i > 0; i--) {
        spaceBefore = 7-i;
        while (spaceBefore--) {
            printf(" ");
        }
        printf("%c", c+i);

        spaceBetween = (i * 2) - 1;
        while (spaceBetween--) {
            printf(" ");
        }
        printf("%c\n", c+i);
    }

    printf("       %c\n", c+i);

    return 0;
}
