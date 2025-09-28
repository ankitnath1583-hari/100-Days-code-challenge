//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    // Input matrix
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
    int distinct = 1; 
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (distinct == 0) break;
    }

    if (distinct == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
