#include <stdio.h>
 
int main()
{
    float w, h, result = 0;
    scanf("%f %f",&w , &h);
    result = w * h / 2.0;
    printf("%.1f", result);
 
    return 0;
}