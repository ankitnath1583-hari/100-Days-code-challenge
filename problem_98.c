//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *token;
    char lastName[50];
    printf("Enter full name: ");
    gets(name);

    token = strtok(name, " ");  
    char initials[50] = "";
    while (token != NULL) {
        strcpy(lastName, token);  
        token = strtok(NULL, " ");
        if (token != NULL) {
            char temp[5];
            sprintf(temp, "%c.", lastName[0]); 
            strcat(initials, temp);
        }
    }

    // Print result
    printf("%s %s\n", initials, lastName);
    return 0;
}
