//2.    Declare a local variable inside a function and try to access it outside the function.
// Compare this with accessing the global variable from within the function.
#include <stdio.h>
int area=124;
void function(){
 int radius=22;
 printf("inside function()\n");
 printf("global variable inside function() =%d\n",area);
 printf("local variable inside function =%d",radius);

}
int main() {
    printf("I am writing in main");
    printf("global variable inside main()=%d",area);
   // printf("local variable inside main()=%d",localradius);
//here it is showing that you have used local variable without declaring it
    function();

   // printf("local variable=%d\n",radius);
   

    
    return 0;
}