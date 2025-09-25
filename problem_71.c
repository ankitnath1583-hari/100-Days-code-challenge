//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main() {
    int rows,col;
    printf("enter row and column:");
   scanf("%d %d",&rows,&col);
    int a[rows][col];
    printf("enter the elements of a matrix:");
    for(int i=0;i<rows;i++)
    
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<rows;i++)
    
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}