//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("valueof a=%d\n value of b=%d\n",a,b);
    return 0;}