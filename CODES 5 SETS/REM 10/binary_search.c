// Binary search
#include <stdio.h>
int bin(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = (r + l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return bin(arr, l, mid - 1, x);
        return bin(arr, mid + 1, r, x);
    }
    return -1;
}
void main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter element to be searched : ");
    scanf("%d", &x);
    int result = bin(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present") : printf("Element is present at index %d", result);
}

// Enter number of elements : 5
// Enter elements : 1 2 3 5 8
// Enter element to be searched : 5
// Element is present at index 3