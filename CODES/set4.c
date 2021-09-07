// SET 4

// Area of square with arguments and no return values
#include <stdio.h>
void ar(int num) {
    int area;
    area = num * num;
    printf("Area = %d", area);
}
void main() {
    int n;
    printf("Enter side of square : ");
    scanf("%d", &n);
    ar(n);
}
// Enter side of square : 6
// Area = 36


// Print the contents of binary file
#include <stdio.h>
#include <stdlib.h>
struct threeNum {
    int n1;
    int n2;
    int n3;
};
void main() {
    struct threeNum n;
    FILE *fp = fopen("binary.bin", "rb");
    if (fp == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    for (int i = 1; i < 5; ++i) {
        fread(&n, sizeof(struct threeNum), 1, fp);
        printf("n1: %d\tn2: %d\tn3: %d\n", n.n1, n.n2, n.n3);
    }
    fclose(fp);
}
// n1: 1819043176  n2: 4200815     n3: 0
// n1: 1819043176  n2: 4200815     n3: 0
// n1: 1819043176  n2: 4200815     n3: 0
// n1: 1819043176  n2: 4200815     n3: 0
