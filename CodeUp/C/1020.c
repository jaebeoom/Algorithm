#include <stdio.h>

int main(void) {

    int yymmdd = 0, n = 0;
    scanf("%06d-%07d", &yymmdd, &n);
    printf("%06d%07d", yymmdd, n);

    return 0;
}
