#include <stdio.h>
 
int main()
{
    char word[31]="";
    fgets(word, 31, stdin);
    printf("%s", word);
 
    return 0;
}