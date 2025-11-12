/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcName[50], destName[50], ch;
    printf("Enter source filename: ");
    scanf("%s", srcName);
    printf("Enter destination filename: ");
    scanf("%s", destName);
    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error opening source file\n");
        return 1;
    }
    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error creating destination file\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully to %s\n", destName);
    return 0;
}
