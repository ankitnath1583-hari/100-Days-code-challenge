//2.Perform pointer arithmetic (increment and decrement) on pointers of different data types.
// Observe how the memory addresses change and the effects on data access.
#include <stdio.h>

int main() {
    int a = 2556;
    char b = 'm';
    float c = 46.363;
    
    int *i = &a;
    char *j = &b;
    float *k = &c;

    
(*i)++;
 (*j)++;
 (*k)++;
    printf("After using i++ operator\n ");
    printf("int: %d\n", *i);
    printf("char: %c\n", *j);
    printf("float: %f\n", *k);

    (*i)--;
    (*j)--;
    (*k)--;
    printf("After using i-- in all three");
    printf("int: %d\n", *i);
    printf("char: %c\n", *j);
    printf("float: %f\n", *k);
    printf("Values: %d, %c, %f", *i, *j, *k);

    return 0;
}