#include <stdio.h>

int main()
{
	int year, mon = 0;

    scanf("%d %d", &year, &mon);

    if(mon == 2){
        if(((year%4 == 0) && (year%100 != 0)) ||  (year%400 == 0)){printf("29");}
        else{printf("28");}
    }
    else{
        if(mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12){printf("31");}
        else{printf("30");}
    }
    
	return 0;
}
