#include <stdio.h>

int main()
{
	int num = 0;

	scanf("%d", &num);
    
	if(num >= 30 && num <= 40 || num >= 60 && num <= 70) 
        printf("win");
    else 
        printf("lose");
        
	return 0;
}
