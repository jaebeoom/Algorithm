#include <stdio.h>

int main()
{
	int grade, class, number = 0;

    scanf("%d %d %d", &grade, &class, &number);
    
    if(class < 10)
        printf("%d0%d", grade, class);    
    else
        printf("%d%d",grade, class);

    if(number < 10)
        printf("00%d", number);
    else if(number < 100)
        printf("0%d", number);
    else
        printf("%d", number);         

        
	return 0;
}
