// Write a C program to find the minimum, maximum and average in an array of integers.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int i, max, min, n;
    float sum=0.0, avg;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = sum / n;
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Sum = %0.2f\n", sum)
    printf("Average = %0.2f", avg);
}
