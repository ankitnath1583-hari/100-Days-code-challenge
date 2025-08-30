//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>
int main(){
    int daysofweek;
    printf("enter day number:");
    scanf("%d",&daysofweek);
    switch(daysofweek)
    { case 1:
        printf("monday");
        break;
      case 2:
      printf("tuesday");
       break;
      case 3:
       printf("wednesday");
        break;
       case 4:
        printf("thrusday");
         break;
       case 5:
        printf("friday");
         break;
       case 6:
        printf("saturday");
         break;
       case 7:
        printf("sunday");   
         break;
     default:
  printf("error! no such days");
    }
    return 0;
}









    

