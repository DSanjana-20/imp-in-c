// Insertion sort ascending
#include <stdio.h>
void ins(int array[], int n) {
    for (int c = 1; c <= n - 1; c++) {
        int d = c;
        int t;
        while (d > 0 && array[d - 1] > array[d]) {
            t = array[d];
            array[d] = array[d - 1];
            array[d - 1] = t;
            d--;
        }
    }
    printf("Sorted list in ascending order : ");
    for (int c = 0; c <= n - 1; c++) {
        printf("%d ", array[c]);
    }
}
void main() {
    int n, array[1000], d, t;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter %d integers : ", n);
    for (int c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }
    ins(array, n);
}
// Enter number of elements : 5
// Enter 5 integers : 1 4 2 5 3
// Sorted list in ascending order : 1 2 3 4 5 