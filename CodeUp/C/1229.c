#include <stdio.h>

int main()
{
	double stature, weight = 0;
    scanf("%lf %lf" , &stature, &weight);
    
    double ratio,ref_weight = 0;
    
    if(stature < 150){ref_weight = stature - 100;}
    else if(stature < 160 ){ref_weight = (stature - 150) / 2 + 50;}
    else{ref_weight = (stature - 100) * 0.9;}
    
    ratio = (weight - ref_weight) * 100 / ref_weight;
    
    if(ratio <= 10){printf("정상");}
    else if(ratio <= 20){printf("과체중");}
    else{printf("비만");}
    
	return 0;
}
