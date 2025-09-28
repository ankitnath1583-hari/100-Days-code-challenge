//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (n != m) {
        printf("Matrix must be square\n");
        return 0;
    }

    int diag[2 * n];   
    int k = 0;
    for (int i = 0; i < n; i++) {
        diag[k++] = matrix[i][i];        
        diag[k++] = matrix[i][n - i - 1]; 
    }
    bool distinct = true;
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (diag[i] == diag[j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
