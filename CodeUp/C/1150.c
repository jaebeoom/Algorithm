#include <stdio.h>
 
int main()
{
    int num1, num2, num3, result = 0;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    result = num1 < num2 ? num1:num2;
    result = result < num3 ? result:num3;
    printf("%d", result);
    
    return 0;
}