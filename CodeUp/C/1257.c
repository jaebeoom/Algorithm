#include <stdio.h>
 
int main()
{
    int num_a, num_b = 0;
    scanf("%d %d", &num_a, &num_b);
    
    for(int i = num_a; i <= num_b; i++){
        if(i % 2 != 0){printf("%d ", i);}
    }

    return 0;
}