#include <stdio.h>

int main()
{
	int birth_info1, birth_info2, birth_info3 = 0;

    scanf("%d %d", &birth_info1, &birth_info2);
    
    birth_info3 = birth_info1 / 10000;

    if(birth_info2 == 1 || birth_info2 == 2)
        printf("%d", 2012 - (1900 + birth_info3) + 1);
    else
        printf("%d", 2012 - (2000 + birth_info3) + 1);

        
	return 0;
}
