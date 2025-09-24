//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    int largest = -1e9, second_largest = -1e9;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;  
            largest = arr[i];        
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == -1e9) {
        printf("No second largest element exists.\n");
    } else {
        printf("Second largest element: %d\n", second_largest);
    }

    return 0;
}

