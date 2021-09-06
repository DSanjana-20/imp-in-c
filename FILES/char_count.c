// file sample.txt has "hello"
#include <stdio.h>
void main() {
    char ch;
    int count = 0;
    FILE *fptr;
    fptr = fopen("sample.txt", "r");
    printf("\nContents of the File is:");
    while ((ch = fgetc(fptr)) != EOF) {
        count++;
        printf("%c", ch);
    }
    fclose(fptr);
    printf("\nThe number of characters present in file is: %d", count);
}
// The number of characters present in file is: 5   
