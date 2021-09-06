#include <stdio.h>
int rechcf(int a, int b) {
    if (b != 0) {
        return rechcf(b, a % b);
    }
    else {
        return a;
    }
}
int nonrechcf(int a, int b) {
    int r = 1;
    while (r != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Recursive : HCF of %d and %d is %d\n", a, b, rechcf(a, b));
    printf("Non-Recursive : HCF of %d and %d is %d", a, b, nonrechcf(a, b));
}