#include <stdio.h>

int main()
{
	int time, score = 0;

    scanf("%d %d", &time, &score);
    
    time = 90 - time;

    if (time == 0)
        printf("%d", score);
    else
        score += 1;
        if(time >= 5)
            score += (time - 1) / 5;
        printf("%d", score);           
        
	return 0;
}
