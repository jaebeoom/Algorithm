#include <stdio.h>

int main()
{
	int grade, class, number = 0;

    scanf("%d %d %d", &grade, &class, &number);
    
    if(number >= 10)
        printf("%d%d%d", grade, class, number);
    else
        printf("%d%d0%d",grade, class, number);
        
	return 0;
}
