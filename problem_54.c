/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int n = 4;  
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");}
        for (int k = 1; k <= (2*i - 1); k++) {
            printf("*");}
        printf("\n");
    }
 for (int i = n-1; i >= 1; i--) {
for (int j = i; j < n; j++) {
  printf(" ");}
for (int k = 1; k <= (2*i - 1); k++) {
     printf("*");
        }
        printf("\n");
    }

    return 0;
}
