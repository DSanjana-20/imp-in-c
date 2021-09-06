#include <stdio.h>
int nonrecpower(int b, int e) {
    int r = 1;
    for (e; e > 0; e--)
        r *= b;
    return r;
}
int recpower(int base, int a) {
    if (a != 0) {
        return (base * recpower(base, a - 1));
    } else {
        return 1;
    }
}
void main() {
    int b, e;
    printf("Enter base and power : ");
    scanf("%d %d", &b, &e);
    printf("Recursive:Result is %d^%d=%d\n", b, e, recpower(b, e));
    printf("Non-Recursive:Result is %d^%d=%d", b, e, nonrecpower(b, e));
}