//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include <stdio.h>

int main() {
    int n,i;
    i=1;
   printf("enter value of n:");
   scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
     }
     while(i<=n);
     return 0;
    }



