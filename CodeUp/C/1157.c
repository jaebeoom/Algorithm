#include <stdio.h>

int main()
{
	float num = 0;

	scanf("%f", &num);
    
	if(num >= 50.0 && num <= 60.0) 
        printf("win");
    else 
        printf("lose");
        
	return 0;
}

