// file sample.txt has "hello"
#include <stdio.h>
void main() {
    char ch;
    int count = 0;
    FILE *fptr;
    fptr = fopen("sample.txt", "r");
    printf("Content is : ");
    while ((ch = fgetc(fptr)) != EOF) {
        count++;
        printf("%c", ch);
    }
    fclose(fptr);
    printf("\nNumber of characters = %d", count);
}
// The number of characters present in file is: 5   
