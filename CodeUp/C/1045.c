#include <stdio.h>

int main() {

    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    printf("%0.2f\n", (double)a / (double)b);

    return 0;

}
