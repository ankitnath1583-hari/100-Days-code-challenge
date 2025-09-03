//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
   int i,n,product;
   product=1;
    printf("enter value of n:");
    scanf("%d",&n);
   for(i=2;i<=n;i +=2){
   
   printf("even  numbers=  %d\n",i);
    product *= i;}
   printf("product=%d",product);
    
    return 0;
}
