#include <stdio.h>

int main() {
    int arr[6];
    for (int i = 0 ; i<6 ; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 5; i > 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("%d\n",arr[0]);

    return 0;
}
