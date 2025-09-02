//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    int x,y;
    int sum,diff,multiplication,mod;
    float div;
 
    char c;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    printf("Menu\n + for Add\n - for Substract\n / for division\n* for multiplication\n%% for Remainder\n");
    printf("Enter the choice of operation:");
    scanf(" %c",&c); 
    switch(c)
    {
        case'+':sum=x+y;
        printf("sum=%d\n",sum);
        break ;
        case'-':diff=x-y;
        printf("diff=%d\n",diff);
        break;
        case '/':div=(float)x/y;
        printf("division=%.2f\n",div);
        break;
        case'*':multiplication=x*y;
        printf("multiplication=%d\n",multiplication);
        break;
        case'%':mod=x % y;
        printf("remainder=%d",mod);
        break;
        default:printf("Invalid choice");
        break;




    
    
    
    }
    return 0;
}