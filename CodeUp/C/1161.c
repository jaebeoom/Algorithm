#include <stdio.h>

int main()
{
	int num1, num2, sum = 0;

	scanf("%d %d", &num1, &num2);
    
	sum = num1 + num2;
    
    if(num1 % 2 == 1)
        printf("홀수+");
    else 
        printf("짝수+");
    if(num2 % 2 == 1)
        printf("홀수=");
    else 
        printf("짝수=");
    if(sum % 2 == 1)
        printf("홀수");
    else 
        printf("짝수");
        
	return 0;
}
