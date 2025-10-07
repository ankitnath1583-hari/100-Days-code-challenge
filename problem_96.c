//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *wordStart = str;
    char *ptr = str;

    while (*ptr) {
        if (*ptr == ' ') {
            reverseWord(wordStart, ptr - 1);
            wordStart = ptr + 1;
        }
        ptr++;}
    reverseWord(wordStart, ptr - 1);

    printf("Output: %s\n", str);

    return 0;
}
