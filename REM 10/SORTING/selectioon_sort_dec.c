// Selection sort decreasing
#include <stdio.h>
void sel(int a[], int n) {
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[min]) {
                min = j;
            }
        }
        int temp;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("The sorted array is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
void main() {
    int n, temp;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sel(a, n);
}
// Enter the size of the array : 5
// Enter the array elements : 1 5 2 3 8
// The sorted array is : 8 5 3 2 1 