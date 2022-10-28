#include <stdio.h>

int main() 
{
	int num1, num2, ari = 0;
	scanf("%d %d", &num1, &num2);
    ari = num1 + num2;
 	printf("%d+%d=%d\n", num1, num2, ari);
    ari = num1 - num2;
 	printf("%d-%d=%d\n", num1, num2, ari);
    ari = num1 * num2;
 	printf("%d*%d=%d\n", num1, num2, ari);
    ari = num1 / num2;
 	printf("%d/%d=%d\n", num1, num2, ari);

    return 0;
}  