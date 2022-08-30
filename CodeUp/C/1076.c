#include <stdio.h>

int main() {

    char x, t = 'a';
    scanf("%c", &x);
    do {
        printf("%c ", t);
        t++;
        x--;
    } while (x >= 'a');

    return 0;

}
