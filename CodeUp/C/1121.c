#include <stdio.h>
 
int main()
{
    int num1, num2, rem = 0;

    scanf("%d %d", &num1, &num2);
    rem = num1 % num2;
    printf("%d", rem);
 
    return 0;
}