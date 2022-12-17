#include <stdio.h>

int main()
{
	int num = 0;

    scanf("%d", &num);
    
    printf("%d",num);
    
    if(num%10 == 1){
        if(num == 11){
            printf("th");
        }
        else{
            printf("st");
        }
    }
    else if(num%10 == 2){
        if(num == 12){
            printf("th");
        }
        else{
            printf("nd");
        }
    }
    else if(num%10 == 3){
        if(num == 1~3){
            printf("th");
        }
        else{
            printf("rd");
        }
    }
    else{
        printf("th");
    }
        
	return 0;
}
