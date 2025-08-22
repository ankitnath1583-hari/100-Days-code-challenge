//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main(){
int length,breadth,Area,Perimeter;
printf("value of length=");
scanf("%d",&length);
printf("value of breadth=");
scanf("%d",&breadth);
Area=length*breadth;
Perimeter=2*(length+breadth);
printf("Area=%d, Perimeter=%d",length*breadth,2*(length+breadth));
return 0;




}