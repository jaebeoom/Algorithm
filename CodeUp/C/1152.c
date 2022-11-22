#include <stdio.h>
int main()
{
	int a = 0;

	scanf("%d", &a);
	if(a < 10)
		printf("small");
    else
        printf("big");    
        
	return 0;
}