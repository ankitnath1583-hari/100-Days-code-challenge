//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, x,position,i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[85]; 
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] > x) {
            break;
        }
    }
    position = i;
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = x;
    n++;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
