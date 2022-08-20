#include <stdio.h>

int main() {

    int y = 0, m = 0, d = 0;
    scanf("%04d.%02d.%02d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);
    
    return 0;

}
