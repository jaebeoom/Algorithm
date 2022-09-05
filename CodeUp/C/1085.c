#include <stdio.h>

int main() {

    long long int h, b, c, s = 0;
    double res;

    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    res = h * b * c * s;
    printf("%.1lf MB", res/(8 * 1024 * 1024));

    return 0;

}
