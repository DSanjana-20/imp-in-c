// SET 2

// Area and Volume of a square with functions
#include <stdio.h>
void area_volume(int s, int *area, int *vol) {
    *area = s * s;
    *vol = s * s * s;
}
void main() {
    int s, a, v;
    printf("Enter side of square : ");
    scanf("%d", &s);
    area_volume(s, &a, &v);
    printf("Area = %d\nVolume = %d", a, v);
}
// Enter side of square : 5
// Area = 25     
// Volume = 125 


// Create a file and insert some set of numbers ,Separate even and odd numbers from the given set  and copy them into two different files.
#include <math.h>
#include <stdio.h>
void main() {
    FILE *all, *even, *odd;
    int n, r;
    printf("Enter number of elements : ");
    scanf("%d", &r);
    all = fopen("num.txt", "w");
    printf("Enter numbers : ");
    for (int i = 1; i <= r; i++) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        putw(n, all);
    }
    fclose(all);
    all = fopen("num.txt", "r");
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");
    while ((n = getw(all)) != EOF) {
        if (n % 2 == 0) {
            putw(n, even);
        } else {
            putw(n, odd);
        }
    }
    fclose(all);
    fclose(even);
    fclose(odd);
    even = fopen("even.txt", "r");
    odd = fopen("odd.txt", "r");
    printf("Even numbers are : ");
    while ((n = getw(even)) != EOF) {
        printf("%d ", n);
    }
    printf("\nOdd numbers are : ");
    while ((n = getw(odd)) != EOF) {
        printf("%d ", n);
    }
    fclose(even);
    fclose(odd);
}
