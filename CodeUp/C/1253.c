#include <stdio.h>
 
int main()
{
    int num_a, num_b, temp = 0;
    scanf("%d %d", &num_a, &num_b);

    if(num_a > num_b){
        temp = num_a;
        num_a = num_b;
        num_b = temp;
    }
 
    for(int i = num_a; i <= num_b; i++){
        printf("%d ", i);
    }
    
    return 0;
}