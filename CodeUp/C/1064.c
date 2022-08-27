#include <stdio.h>

int main() {

    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a>b ? b:a)>c ? c:(a>b ? b:a));

    return 0;

}
