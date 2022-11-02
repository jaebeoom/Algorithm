#include <stdio.h>
 
int main()
{
    int num, min, sec = 0;

    scanf("%d", &num);
    min = num / 60;
    sec = num % 60;
    printf("%d %d", min, sec);
 
    return 0;
}