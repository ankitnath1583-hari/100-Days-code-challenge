//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main() {
    int cp,sp, loss,gain,profit;
    float profit_percent,loss_percent;
    printf("enter cost price :");
    scanf("%d",&cp);
    printf("enter selling price:");
    scanf("%d",&sp);
    profit=sp-cp;
    profit_percent=((float)profit/cp)*100;
    loss=cp-sp;
    loss_percent=((float)loss/cp)*100;
    if(sp>cp)
    {
        printf("profit=%.2f%%",profit_percent);
    }
    else if(cp>sp)
    {
        printf("loss=%f%%",loss_percent);
    }
    else
    printf("No profit No loss");


    return 0;
}