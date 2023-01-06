#include <stdio.h>
 
int main()
{
    char alphabet_x, alphabet_y;
    scanf("%c %c", &alphabet_x, &alphabet_y);
    
    for(int i = alphabet_x; i <= alphabet_y; i++){
        printf("%c ", i);
    }
    
    return 0;
}