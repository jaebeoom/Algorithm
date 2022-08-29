#include <stdio.h>

int main() {

    int n = 0;
    reload:
        scanf("%d", &n);
        
        if (n != 0) {
            printf("%d\n", n);
            goto reload;
        }

        return 0;
        
}
