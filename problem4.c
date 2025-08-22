//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main(){
    int r;
    float Area,Circumference;
    const float pi=3.14159265359;
    printf("enter the value of r:");
    scanf("%d",&r);
    Circumference=2*pi*r;
    Area=pi*r*r;
    printf("Area=%.2f, Cicumference=%.2f",pi*r*r,2*pi*r);
    return 0;
}