#include <stdio.h>

int main() {

    long long int w, h, b = 0;
    double mb;

    scanf("%lld %lld %lld", &w, &h, &b);
    mb = (w * h * b);
    printf("%.2lf MB", mb/(8 * 1024 * 1024));

    return 0;

}
