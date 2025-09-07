//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int prime=0;
    for (int i=2; i<n; i++)
    {
        if(n%i ==0){
            prime=1;
        }
    }
    if(prime){
        printf("%d is not prime\n",n);
    }
    else{
        printf("%d is a prime number\n",n);
    }
    return 0;
}