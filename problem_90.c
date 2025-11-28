//toggle the case of letters of word
#include <stdio.h>
#include <string.h> 
int main() {
    char str[100];
    printf("Enter a string to toggle its case: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Original string:  %s\n", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') {   
            str[i] = str[i] - 32;
        }   
    }
    printf("Toggled string:   %s\n", str);
    return 0;
}