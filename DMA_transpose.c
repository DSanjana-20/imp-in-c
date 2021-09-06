#include <stdio.h>
#include <stdlib.h>
void main() {
    int *b, r, c;
    printf("Enter number of rows and columns : ");
    scanf(" %d %d", &r, &c);
    b = (int *)calloc(r * c, sizeof(int));
    printf("Enter elements : ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", b + (i * c + j) * sizeof(int));
        }
    }
    printf("Transpose is :\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", *(b + (j * c + i) * sizeof(int)));
        }
        printf("\n");
    }
}
// Enter number of rows and columns : 2 2
// Enter elements : 1 2 3 4
// Transpose is :
// 1 3 
// 2 4 