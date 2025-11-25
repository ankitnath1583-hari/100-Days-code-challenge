//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
FILE *src, *dest;
char s[50], d[50];
int ch;
printf("Enter source file name: ");
scanf("%s", s);
printf("Enter destination file name: ");
scanf("%s", d);
src=fopen(s,"r");
if(src==NULL){ printf("Source file not found!\n"); return 1; }
dest=fopen(d,"w");
if(dest==NULL){ printf("Unable to create destination file!\n"); fclose(src); return 1; }
while((ch=fgetc(src))!=EOF) fputc(ch,d);
 fclose(src);
    fclose(dest);
printf("File copied successfully!\n");
    return 0;
}