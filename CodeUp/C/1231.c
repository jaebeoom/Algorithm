#include <stdio.h>

int main()
{
	int num1,num2 = 0;
    char calculater;
    
    scanf("%d%c%d", &num1, &calculater, &num2);
    
    if(calculater == '+'){
        printf("%d", num1 + num2);
    }
    else if(calculater == '-'){
        printf("%d", num1 - num2);
    }
    else if(calculater == '*'){
        printf("%d", num1 * num2);
    }
    else{
        printf("%.02f", (float)num1 / (float)num2);
    }
    
	return 0;
}
