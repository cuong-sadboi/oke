#include <stdio.h>

#define MAX_SIZE 100

void sortArray(int arr[], int size);
void displayArray(const int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size, i;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    sortArray(arr, size);

    printf("Mang sau khi sap xep va loai bo gia tri trung lap:\n");
    displayArray(arr, size);

    return 0;
}

void sortArray(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void displayArray(const int a[], int n) {
    int i;
    printf("Mang sau khi sap xep va loai bo gia tr? trung lap: "); 
    for (i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }
}

