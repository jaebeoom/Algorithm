#include <stdio.h>

int main()
{
	int hour, min = 0;
    scanf("%d %d",&hour, &min);
    if(min - 30 >= 0){
        printf("%d %d", hour, min - 30);
        
    }
    else{
        hour -= 1;
        if(hour < 0){hour = 23;}
        
        printf("%d %d", hour, 30 + min);
    }
        
	return 0;
}
