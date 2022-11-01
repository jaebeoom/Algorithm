#include <stdio.h>
 
int main()
{
    int num1, num2, num3 = 0;
    float mean = 0;

    scanf("%d %d %d", &num1, &num2, &num3);
    mean = (num1 + num2 + num3) / 3.0;
    printf("%.2f", mean);
 
    return 0;
}