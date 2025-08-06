#include <stdio.h>

int main() {
    int arr[] = {2, 7, 4, 9, 6};
    int foundEven = 0;

    printf("Cac so chan trong mang: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            foundEven = 1;
        }
    }
    if (foundEven == 0) {
        printf("Mang khong chua so chan\n");
    } else {
        printf("\n");
    }

    return 0;
}