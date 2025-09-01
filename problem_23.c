/*Q23: Write a program to calculate a library fine based on late days.


Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled*/
#include <stdio.h>

int main() {
    int days,fine,m;
   
//m stands for money which is amount for specific days
    printf("enter number of extra days:");
    scanf("%d",&days);
    if(days<8){
        m=2;
        fine=m*days;
        printf("Fine %d",fine);
      }
   else if(days>=8 && days<15)
    {
        m=4;
        fine=m*days;
        printf("fine %d",fine);
    }
    else if( days>=15 && days<=30)
    {
        m=6;
        fine=m*days;
        printf("fine %d",fine);
    }
    else{
      printf("Membership Cancelled");
    }


    }

   


