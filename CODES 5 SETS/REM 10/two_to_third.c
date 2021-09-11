// Copy two files to third 
#include <stdio.h>
#include <stdlib.h>
void main() {
    FILE *fp1 = fopen("source.txt", "r");
    FILE *fp2 = fopen("target.txt", "r");
    FILE *fp3 = fopen("file5.txt", "w");
    char c;
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        puts("Could not open files");
        exit(0);
    }
    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp3);
    }
    while ((c = fgetc(fp2)) != EOF) {
        fputc(c, fp3);
    }
    printf("Done!");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
// Done