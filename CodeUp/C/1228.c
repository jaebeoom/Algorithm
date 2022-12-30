#include <stdio.h>

int main()
{
	double stature, weight = 0;
    scanf("%lf %lf", &stature, &weight);
    
    double ratio = 0;
    
    ratio = (weight - ((stature - 100) * 0.9)) * 100 / ((stature - 100) * 0.9);
    
    if(ratio <= 10){printf("정상");}
    else if(ratio <= 20){printf("과체중");}
    else{printf("비만");}
    
	return 0;
}
