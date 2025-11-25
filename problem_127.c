//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp_in, *fp_out;
    char ch;

    fp_in = fopen("input.txt", "r");
    fp_out = fopen("output.txt", "w");

    if (fp_in == NULL || fp_out == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp_in)) != EOF) {
        ch = toupper(ch);   // convert to upper
        fputc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    printf("File converted successfully!\n");
    return 0;
}
