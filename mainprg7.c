#include <stdio.h>

int main() {
    int rows = 4;
    for (int i = 1; i <= rows; i++) {
        char ch = 'a';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}