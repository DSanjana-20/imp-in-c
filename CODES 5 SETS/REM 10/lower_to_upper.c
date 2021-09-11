// copy one file to another and replace all lower with upper characters
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *p1, *p2;
    char ch;
    p1 = fopen("source.txt", "r");
    p2 = fopen("target.txt", "w");
    if (p1 == NULL || p2 == NULL) {
        puts("Files do not exist..");
        exit(1);
    }
    while ((ch = fgetc(p1)) != EOF) {
        ch = toupper(ch);
        fputc(ch, p2);
    }
    printf("\nFile successfully copied..");
}

// File successfully copied..