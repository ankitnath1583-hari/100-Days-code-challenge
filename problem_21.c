//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>

int main() {
    int month;
    printf("enter any month number:");
    scanf("%d",&month);
    switch(month)
    { 
        case 1:
        printf("january,31 days");
        break;
        case 2:
        printf("february, 28 days");
        break;
        case 3:
        printf("March, 31 days");
        break;
        case 4:
        printf("April, 30 days");
        break;
        case 5:
        printf("may, 31 days");
        break;
        case 6:
        printf("June, 30 days");
        break;
        case 7:
        printf("july, 31 days");
        break;
        case 8:
        printf("August, 31 days");
        break;
        case 9:
        printf("september, 30 days");
        break;
        case 10:
        printf("october, 31 days");
        break;
        case 11:
        printf("november, 30 days");
        break;
        case 12:
        printf("December, 31 days");
        break;
        default:
        printf("no such month exist");
}
    return 0;
}