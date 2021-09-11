// SET 1

// Calculator
#include <math.h>
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    return a / b;
}
int rem(int a, int b) {
    return a % b;
}
void main() {
    int a, b;
    char sign;
    printf("Enter sign(+,-,*,/,%%) : ");
    scanf("%c", &sign);
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    switch (sign) {
        case '+':
            printf("Result is %d", a + b);
            break;
        case '-':
            printf("Result is %d", a - b);
            break;
        case '*':
            printf("Result is %d", a * b);
            break;
        case '/':
            printf("Result is %d", a / b);
            break;
        case '%':
            printf("Result is %d", a % b);
            break;
        default:
            printf("An error occured!");
            break;
    }
}
// Enter sign(+,-,*,/,%) : +
// Enter two numbers : 5 8
// Result is 13


// Read from one file and copy to other
#include <stdio.h>
#include <stdlib.h>
void main() {
    FILE *fa = fopen("source.txt", "r");
    FILE *fb = fopen("target.txt", "w");
    char c;
    if (fa == NULL || fb == NULL) {
        printf("An error occured!");
        exit(0);
    }
    while ((c = fgetc(fa)) != EOF) {
        fputc(c, fb);
    }
    printf("Completed!");
    fclose(fa);
    fclose(fb);
}
// Completed
