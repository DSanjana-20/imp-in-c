// SET 3

// Write a C program to create 3 different data type variables in structure and allocate memory dynamically and print the values using typdef
#include <stdio.h>
#include <stdlib.h>
typedef struct rec {
    int i;
    float PI;
    char A;
} RECORD;
void main() {
    RECORD *ptr_one;
    ptr_one = (RECORD *)malloc(sizeof(RECORD));
    (*ptr_one).i = 10;
    (*ptr_one).PI = 3.14;
    (*ptr_one).A = 'a';
    printf("First value: %d\n", (*ptr_one).i);
    printf("Second value: %f\n", (*ptr_one).PI);
    printf("Third value: %c\n", (*ptr_one).A);
    free(ptr_one);
}
// First value: 10
// Second value: 3.140000
// Third value: a

// Write a C program to count the number of times a character occurs in a text file. The file name and the character are supplied as command line arguments
#include <stdio.h>
int main() {
    char s[100], ch, key;
    int count = 0;
    printf("Enter character to be searched : ");
    scanf("%c", &key);
    printf("Enter filename with extension : ");
    scanf("%s", &s);
    FILE *ptr = fopen(s, "r");
    while ((ch = fgetc(ptr)) != EOF) {
        if (ch == key) {
            count += 1;
        }
    }
    printf("Frequency = %d", count);
    fclose(ptr);
}
// Enter character to be searched : l
// Enter filename with extension : sample.txt
// Frequency = 2
