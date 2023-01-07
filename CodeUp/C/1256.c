#include <stdio.h>
 
int main()
{
    int num = 0;
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        printf("*");
    }

    return 0;
}