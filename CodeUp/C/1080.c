#include <stdio.h>

int main() {

    int a, i, sum = 0;

    scanf("%d", &a);
    while(1) {
        i++;
        sum += i;
        if (sum >= a) {
            break;
        }
    }
    printf("%d", i);

    return 0;

}
