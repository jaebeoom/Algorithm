#include <stdio.h>

int main() {

    int n, m = 0;
    int arr[10000]= {0, };

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i -1; j++) {
            if(arr[j] > arr[j + 1]) {
                m = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = m;
            }
        }
    }

    printf("%d", arr[0]);

    return 0;

}
