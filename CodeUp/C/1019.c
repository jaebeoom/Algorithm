#include <stdio.h>

int main(void) {

    int yyyy = 0, mm = 0, dd = 0;
    scanf("%04d.%02d.%02d", &yyyy, &mm, &dd);
    printf("%04d.%02d.%02d", yyyy, mm, dd);

    return 0;
}
