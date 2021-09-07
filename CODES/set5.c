// SET 5

// Write a C program to insert 5 elements into an array and modify the elements by adding 5 to each of these and print the same using functions
#include <stdio.h>
int modify(int x[]) {
    for (int i = 0; i < 5; i++) {
        x[i] += 5;
    }
}
void main() {
    int a[5] = {10, 20, 30, 40, 50};
    modify(a);
    printf("New array is : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}
// New array is : 15 25 35 45 55 


// Write a c program to insert a string at initial address of memory and reallocate a string using malloc() and realloc() functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
    char *str;
    str = (char *)malloc(15);
    strcpy(str, "kmit");
    printf("String = %s\nAddress = %u\n", str, str);
    str = (char *)realloc(str, 10);
    strcat(str, ".com");
    printf("String = %s\nAddress = %u", str, str);
    free(str);
}
// String = kmit
// Address = 8001008
// String = kmit.com
// Address = 8001008
