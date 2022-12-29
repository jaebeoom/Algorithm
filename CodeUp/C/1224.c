#include <stdio.h>

int main()
{
	float num1, num2, num3, num4 = 0.0;
    scanf("%f %f %f %f",&num1, &num2, &num3, &num4);
    
    float a,b = 0.0;
    
    a = (float)(num1 / num2);
    b = (float)(num3 / num4);
    
    if(a > b){printf(">");}
    else if(a == b){printf("=");}
    else{printf("<");}
    
	return 0;
}
