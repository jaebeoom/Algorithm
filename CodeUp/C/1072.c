#include <stdio.h>

int main() {

        int n = 0, m = 0;
        scanf("%d", &n);
    reget:
        scanf("%d", &m);
        if (n-- != 0) {
            printf("%d\n", m);
            goto reget;
        }

        return 0;

}
