#include <stdio.h>

int main() {
    int size;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int arr[size];

    printf("Nhap %d phan tu cho mang:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}