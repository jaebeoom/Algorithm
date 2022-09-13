#include <stdio.h>

int main() {

    int arr[24] = {0, };
    int n, m = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &m);
        arr[m] += 1;
    }
    for (int j = 1; j < 24; j++) {
        printf("%d ", arr[j]);
    }

    return 0;

}
