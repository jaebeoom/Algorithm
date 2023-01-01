#include <stdio.h>

int main()
{
	int tunnel_a, tunnel_b ,tunnel_c = 0;
    int car = 170;
    
    scanf("%d %d %d",&tunnel_a, &tunnel_b, &tunnel_c);
    
    if(tunnel_a <= car){
        printf("CRASH %d",tunnel_a);
    }
    else if(tunnel_b <= car){
        printf("CRASH %d",tunnel_b);
    }
    else if(tunnel_c <= car){
        printf("CRASH %d",tunnel_c);
    }
    else{
        printf("PASS");
    }
    
	return 0;
}
