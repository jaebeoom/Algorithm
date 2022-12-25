#include <stdio.h>

int main()
{
	int num1 , num2 ,num3 = 0;
    scanf("%d %d %d",&num1, &num2 , &num3);
    
    if((num2 - num1) > num3){printf("advertise");}
    else if((num2 - num1) == num3){printf("does not matter");}
    else{printf("do not advertise");}
    
	return 0;
}
