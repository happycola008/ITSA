#include <stdio.h>

int main() {
    int arr[6];
    

    // 讀取陣列元素
    for (int i = 0 ; i<6 ; i++) {
        scanf("%d", &arr[i]);
    }

    // 印出翻轉陣列
    for (int i = 5; i > 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("%d\n",arr[0]);

    return 0;
}
