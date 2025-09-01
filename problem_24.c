//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include <stdio.h>

int main()
{
    int unit;
    float p, bill;
    printf("enter unit consumed:");
    scanf("%d", &unit);
    if (unit < 150)
    {
        p = 5;
        bill = unit * p;
        printf("bill:Rs%.2f", bill);
    }
    else if (unit >= 150 && unit<250)
    {
        p = 6.33333;
        bill = unit * p;
        printf("bill:Rs%.2f", bill);
    }
    else{
        p=8.8;
        bill=unit*p;
        printf("bill:Rs%.2f", bill);
    }
 

    return 0;
}