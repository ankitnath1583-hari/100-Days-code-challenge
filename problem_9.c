#include<math.h>
#include<stdio.h>
int main(){
    double p,r,n,t,a,SI;
    
    printf("enter value of p:");
    scanf("%lf",&p);
    printf("enter value of r:");
    scanf("%lf",&r);
    printf("enter value of n:");
    scanf("%lf",&n);
    printf("enter value of t:");
    scanf("%lf",&t);
   a=p*pow((1+r/(n*100.0)), n*t); 
    SI=(p*r*t)/100;
   printf(" SI(simple  interest)=%.2lf C.I(compound interest)=%.2lf",SI,a-p);
   return 0;
}