//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int rows,col,sum=0;
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
         sum+=a[i][j];
        }
    }
    printf("sum=%d",sum);
    return 0;
}