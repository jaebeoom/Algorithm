#include <stdio.h>
 
int main()
{
    int cel = 0;
    float feh = 0.0;

    scanf("%d", &cel);
    feh = 9.0 / 5 * cel + 32;
    printf("%.3f", feh);
 
    return 0;
}