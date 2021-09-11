// Bubble sort
#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    printf("Sorted array is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
void main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
}
// Enter number of elements : 5
// Enter elements : 1 5 6 8 2
// Sorted array is : 1 2 5 6 8 