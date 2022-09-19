#include <stdio.h>

int main() {

    int a[10][10];
    int m = 1, n = 1;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    while (1)
    {
        if (a[m][n] == 0)
            a[m][n] = 9;

        else if (a[m][n] == 2)
        {
            a[m][n] = 9;
            break;
        }




        if ((m == 9 && n == 9) || (a[m][n + 1] == 1 && a[m + 1][n] == 1))
            break;


        if (a[m][n + 1] != 1)
            n++;

        else if (a[m + 1][n] != 1)
            m++;

    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
