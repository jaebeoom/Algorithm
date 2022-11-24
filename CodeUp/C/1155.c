#include <stdio.h>

int main()
{
	int num = 0;

	scanf("%d", &num);
    
	if(num % 7 == 0)
		printf("multiple");    
    else
        printf("not multiple");    
        
	return 0;
}