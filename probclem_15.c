//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
 int main(){
  char alphabet;
      printf("enter any alphabet:");
       scanf("%c",&alphabet);
        if(alphabet>=65 && alphabet<=90) {       
      printf("this is uppercase");}
               else if(alphabet>=97 && alphabet<=122)
          {
               printf("this is lower case");
           }
           else {
               printf("this is a special character");
           }
      
           return 0; }