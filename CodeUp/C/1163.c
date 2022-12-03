#include <stdio.h>

int main()
{
	int year, month, day, sum = 0;

    scanf("%d %d %d", &year, &month, &day);
    sum = (year + month + day) % 1000;
    sum = sum / 100;
    
    if(sum % 2 == 0)
        printf("대박"); 
    else 
        printf("그럭저럭");
        
	return 0;
}
