//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c,D;
  printf("enter a:");
  scanf("%d",&a);
   printf("enter b:");
  scanf("%d",&b);
  printf("enter c:");
  scanf("%d",&c);
  D=b*b-4*a*c;
  if(D>0){
    printf("D=%d real and different roots ",D);
  }
if(D==0){
    printf("D=%dreal and same",D);
}
if(D<0){
    printf("D=%d complex roots",D);
}





}