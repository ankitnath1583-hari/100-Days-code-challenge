//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    if(a>b && a>c){
    printf("a is greatest of all");}
     else if(b>a && b>c)
    {printf("b is greatest of all");
    }
    else{
        printf("c is greatest of all");
    }


}