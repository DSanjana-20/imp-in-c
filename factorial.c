#include <stdio.h>
int nonrecfac(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}
int recfac(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * recfac(n - 1);
    }
}
void main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Recursive:Factorial is %d\n", recfac(n));
    printf("Non-Recursive:Factorial is %d\n", nonrecfac(n));
}