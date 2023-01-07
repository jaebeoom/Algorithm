#include <stdio.h>
 
int main()
{
    double num_a, num_b = 0;
    scanf("%lf %lf", &num_a, &num_b);
    
    for(double i = num_a; i <= num_b; i += 0.01){
        printf("%.2lf ", i);
    }

    return 0;
}