// Addition of matrices
#include <stdio.h>
void main() {
    int m, n;
    printf("Enter number of rows and columns of matrix : ");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter elements of first matrix : ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter elements of second matrix : ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("On adding both the matrices, we get :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}
// Enter number of rows and columns of matrix : 2 2
// Enter elements of first matrix : 1 2 3 4
// Enter elements of second matrix : 5 6 7 8
// On adding both the matrices, we get :
// 6 8 
// 10 12 