#include <stdio.h>

int main()
{
	int t1, t2, t3 = 0; //tunnel
    int car = 170;

    scanf("%d %d %d", &t1, &t2, &t3);
    
    if ((t1 > car) && (t2 > car) && (t3 > car))
        printf("PASS");
    else
        printf("CRASH");    
        
	return 0;
}
