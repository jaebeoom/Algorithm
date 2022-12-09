#include <stdio.h>

int main()
{
	int front, age, rear = 0;

    scanf("%d", &age);
    
    if(age > 13){
    
        front = 112 - age + 1;
        rear = 1;
        printf("%d %d",front, rear);
    }
    else{
        front = 12 - age +1;
        rear = 3;
        printf("%d %d",front, rear);
    }
        
	return 0;
}
