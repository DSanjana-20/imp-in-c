#include <stdio.h>
void main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements : ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    printf("You entered : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", *(arr + i));
    }
}
