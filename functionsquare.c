#include <stdio.h>
int square();
int main() {
    int value;
     value=square(5);
     printf("value=%d",value);

    
    return 0;
}
int square(int a){
   
return(a*a);
}