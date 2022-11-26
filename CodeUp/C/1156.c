#include <stdio.h>

int main()
{
	int natural_num = 0;

	scanf("%d", &natural_num);
    
	if(natural_num % 2 == 1)
		printf("odd");    
    else
        printf("even");    
        
	return 0;
}